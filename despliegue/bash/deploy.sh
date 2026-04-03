#!/bin/bash

# ═══════════════════════════════════════════════════════════════
#  deploy.sh — Script de despliegue (macOS)
# ═══════════════════════════════════════════════════════════════
#
#  Servicios que arranca (en orden):
#    1. MongoDB
#    2. RabbitMQ
#    3. Node-RED
#    4. Servidor JavaScript (Node.js)
#    5. Servidor Java (.jar)
#    6. Unreal Engine
#
#  Uso:
#    chmod +x deploy.sh
#    ./deploy.sh
# ═══════════════════════════════════════════════════════════════

set -e

# ── Configuración — ajusta estas variables ──────────────────────

JS_SERVER_DIR="/ruta/a/tu/servidor-js"      # Directorio del servidor JS
JS_SERVER_FILE="server.js"                   # Fichero de entrada del servidor JS
JS_SERVER_PORT=3000

JAVA_JAR="/ruta/a/tu/servidor.jar"           # Ruta al .jar del servidor Java
JAVA_SERVER_PORT=8080

NODERED_PORT=1880

UNREAL_APP="/ruta/a/tu/proyecto/MiJuego.app" # Ruta al .app de Unreal

LOGS_DIR="./logs"

# ── Configuración MongoDB ───────────────────────────────────────
MONGO_DB_NAME="Sonobuoys"
MONGO_VERSION="7.0"

# ── Configuración RabbitMQ ──────────────────────────────────────
RABBIT_CONTAINER="rabbitmq"
RABBIT_PORT=5672        # puerto AMQP (el que usa el servidor Java)
RABBIT_MGMT_PORT=15672  # puerto del panel de gestión web

# ── Configuración Node-RED ──────────────────────────────────────
NODERED_PORT=1880
NODERED_DIR="$HOME/.node-red"   # Directorio con flows y configuración

# ── Configuración Servidor JS ───────────────────────────────────
JS_SERVER_DIR="$HOME/Documents/Master Investigación/IC/Proyecto_IC/marine-environment-situational-awareness-with-sonobuoys"
JS_SERVER_FILE="wot-server.js"
JS_SERVER_PORT=8484

# ── Colores para la terminal ────────────────────────────────────
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
CYAN='\033[0;36m'
NC='\033[0m' # No color

# ── Funciones de utilidad ───────────────────────────────────────

mkdir -p "$LOGS_DIR"

log()     { echo -e "${CYAN}[$(date '+%H:%M:%S')]${NC} $1" | tee -a "$LOGS_DIR/deploy.log"; }
success() { echo -e "${GREEN}[$(date '+%H:%M:%S')] ✓ $1${NC}" | tee -a "$LOGS_DIR/deploy.log"; }
error()   { echo -e "${RED}[$(date '+%H:%M:%S')] ✗ $1${NC}" | tee -a "$LOGS_DIR/deploy.log"; exit 1; }
warn()    { echo -e "${YELLOW}[$(date '+%H:%M:%S')] ⚠ $1${NC}" | tee -a "$LOGS_DIR/deploy.log"; }

wait_for_port() {
  local port=$1
  local service=$2
  local retries=25

  log "Esperando a que $service esté listo en el puerto $port..."
  while ! nc -z localhost "$port" 2>/dev/null; do
    retries=$((retries - 1))
    if [ $retries -le 0 ]; then
      error "$service no arrancó a tiempo. Revisa $LOGS_DIR/$service.log"
    fi
    sleep 2
  done
  success "$service listo"
}

# ── Inicio ──────────────────────────────────────────────────────

echo ""
echo -e "${CYAN}═══════════════════════════════════════${NC}"
echo -e "${CYAN}        Despliegue — macOS              ${NC}"
echo -e "${CYAN}═══════════════════════════════════════${NC}"
echo ""

# ── 1. MongoDB ──────────────────────────────────────────────────
log "Arrancando MongoDB..."
if brew services list | grep -q "mongodb-community@$MONGO_VERSION.*started"; then
  warn "MongoDB ya está en ejecución, saltando..."
else
  brew services start mongodb-community@$MONGO_VERSION 2>>"$LOGS_DIR/mongodb.log" \
    || error "No se pudo arrancar MongoDB"
fi
wait_for_port 27017 "MongoDB"

# Crear/conectar la base de datos Sonobuoys
log "Conectando base de datos '$MONGO_DB_NAME'..."
mongosh --quiet --eval "
  db = db.getSiblingDB('$MONGO_DB_NAME');
  db.createCollection('_init', { capped: true, size: 1 });
  print('Base de datos lista: ' + db.getName());
" 2>>"$LOGS_DIR/mongodb.log" || error "No se pudo inicializar la base de datos '$MONGO_DB_NAME'"
success "Base de datos '$MONGO_DB_NAME' lista"

# ── 2. RabbitMQ (Docker) ────────────────────────────────────────
log "Arrancando RabbitMQ (Docker)..."
if docker ps --format '{{.Names}}' | grep -q "^rabbitmq$"; then
  warn "RabbitMQ ya está en ejecución, saltando..."
else
  docker start "$RABBIT_CONTAINER" 2>>"$LOGS_DIR/rabbitmq.log" \
    || error "No se pudo arrancar el contenedor '$RABBIT_CONTAINER'"
fi
wait_for_port "$RABBIT_PORT" "RabbitMQ AMQP"
wait_for_port "$RABBIT_MGMT_PORT" "RabbitMQ Management"
success "RabbitMQ listo → http://localhost:$RABBIT_MGMT_PORT"

# ── 3. Node-RED ─────────────────────────────────────────────────
log "Arrancando Node-RED..."
if nc -z localhost "$NODERED_PORT" 2>/dev/null; then
  warn "Node-RED ya está en ejecución, saltando..."
else
  nohup node-red --userDir "$NODERED_DIR" \
    > "$LOGS_DIR/nodered.log" 2>&1 &
  echo $! > /tmp/nodered.pid
fi
wait_for_port "$NODERED_PORT" "Node-RED"
success "Node-RED listo → http://localhost:$NODERED_PORT"

# ── 4. Servidor JavaScript ──────────────────────────────────────
log "Arrancando servidor JavaScript (wot-server)..."
if nc -z localhost "$JS_SERVER_PORT" 2>/dev/null; then
  warn "Servidor JS ya está en ejecución, saltando..."
else
  if [ ! -f "$JS_SERVER_DIR/$JS_SERVER_FILE" ]; then
    error "No se encontró $JS_SERVER_FILE en: $JS_SERVER_DIR"
  fi
  pushd "$JS_SERVER_DIR" > /dev/null
  nohup node "$JS_SERVER_FILE" \
    > "$OLDPWD/$LOGS_DIR/js-server.log" 2>&1 &
  echo $! > /tmp/js-server.pid
  popd > /dev/null
fi
wait_for_port "$JS_SERVER_PORT" "Servidor JS"
success "Servidor JS listo → http://localhost:$JS_SERVER_PORT"

# ── 5. Servidor Java ────────────────────────────────────────────


# ── 6. Unreal Engine ────────────────────────────────────────────


# ── Resumen final ───────────────────────────────────────────────
# echo ""
# echo -e "${GREEN}═══════════════════════════════════════${NC}"
# echo -e "${GREEN}  ✅ Todos los servicios arrancados     ${NC}"
# echo -e "${GREEN}═══════════════════════════════════════${NC}"
# echo ""
# echo -e "  MongoDB       → puerto ${CYAN}27017${NC}"
# echo -e "  RabbitMQ      → puerto ${CYAN}5672${NC}"
# echo -e "  Node-RED      → puerto ${CYAN}$NODERED_PORT${NC}  → http://localhost:$NODERED_PORT"
# echo -e "  Servidor JS   → puerto ${CYAN}$JS_SERVER_PORT${NC}  → http://localhost:$JS_SERVER_PORT"
# echo -e "  Servidor Java → puerto ${CYAN}$JAVA_SERVER_PORT${NC}  → http://localhost:$JAVA_SERVER_PORT"
# echo -e "  Unreal        → ${CYAN}en ejecución${NC}"
# echo ""
# echo -e "  Logs en: ${CYAN}$LOGS_DIR/${NC}"
# echo ""
