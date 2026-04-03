#!/bin/bash

# ═══════════════════════════════════════════════════════════════
#  stop.sh — Script de parada de servicios (macOS)
# ═══════════════════════════════════════════════════════════════
#
#  Para los servicios en orden inverso al arranque:
#    4. Servidor JavaScript
#    3. Node-RED
#    2. RabbitMQ
#    1. MongoDB
#
#  Uso:
#    chmod +x stop.sh
#    ./stop.sh
# ═══════════════════════════════════════════════════════════════

MONGO_VERSION="7.0"

RABBIT_CONTAINER="rabbitmq"

# ── Colores ─────────────────────────────────────────────────────
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
CYAN='\033[0;36m'
NC='\033[0m'

log()     { echo -e "${CYAN}[$(date '+%H:%M:%S')]${NC} $1"; }
success() { echo -e "${GREEN}[$(date '+%H:%M:%S')] ✓ $1${NC}"; }
warn()    { echo -e "${YELLOW}[$(date '+%H:%M:%S')] ⚠ $1${NC}"; }

stop_pid() {
  local pidfile=$1
  local service=$2

  if [ -f "$pidfile" ]; then
    local pid
    pid=$(cat "$pidfile")
    if kill -0 "$pid" 2>/dev/null; then
      log "Parando $service (PID $pid)..."
      kill "$pid"
      sleep 1
      # Si sigue vivo, forzar
      if kill -0 "$pid" 2>/dev/null; then
        warn "$service no respondió, forzando parada..."
        kill -9 "$pid"
      fi
      success "$service detenido"
    else
      warn "$service ya no estaba en ejecución"
    fi
    rm -f "$pidfile"
  else
    warn "No se encontró PID de $service, buscando por proceso..."
    pkill -f "$3" 2>/dev/null && success "$service detenido" || warn "$service no encontrado"
  fi
}

# ── Inicio ──────────────────────────────────────────────────────

echo ""
echo -e "${CYAN}═══════════════════════════════════════${NC}"
echo -e "${CYAN}        Parada de servicios — macOS     ${NC}"
echo -e "${CYAN}═══════════════════════════════════════${NC}"
echo ""

# ── 6. Unreal Engine ────────────────────────────────────────────

# ── 5. Servidor Java ────────────────────────────────────────────


# ── 4. Servidor JavaScript ──────────────────────────────────────
log "Parando servidor JavaScript..."
if [ -f /tmp/js-server.pid ]; then
  PID=$(cat /tmp/js-server.pid)
  if kill -0 "$PID" 2>/dev/null; then
    kill "$PID"
    sleep 1
    kill -0 "$PID" 2>/dev/null && kill -9 "$PID"
    success "Servidor JS detenido"
  else
    warn "Servidor JS ya no estaba en ejecución"
  fi
  rm -f /tmp/js-server.pid
else
  pkill -f "wot-server.js" 2>/dev/null \
    && success "Servidor JS detenido" \
    || warn "Servidor JS no estaba en ejecución"
fi

# ── 3. Node-RED ─────────────────────────────────────────────────
log "Parando Node-RED..."
if [ -f /tmp/nodered.pid ]; then
  PID=$(cat /tmp/nodered.pid)
  if kill -0 "$PID" 2>/dev/null; then
    kill "$PID"
    sleep 1
    kill -0 "$PID" 2>/dev/null && kill -9 "$PID"
    success "Node-RED detenido"
  else
    warn "Node-RED ya no estaba en ejecución"
  fi
  rm -f /tmp/nodered.pid
else
  # Fallback por si el PID no existe
  pkill -f "node-red" 2>/dev/null \
    && success "Node-RED detenido" \
    || warn "Node-RED no estaba en ejecución"
fi


# ── 2. RabbitMQ ─────────────────────────────────────────────────
log "Parando RabbitMQ (Docker)..."
if docker ps --format '{{.Names}}' | grep -q "^rabbitmq$"; then
  docker stop "$RABBIT_CONTAINER" 2>/dev/null \
    && success "RabbitMQ detenido" \
    || warn "No se pudo detener el contenedor"
else
  warn "RabbitMQ no estaba en ejecución"
fi

# ── 1. MongoDB ──────────────────────────────────────────────────
log "Parando MongoDB..."
brew services stop mongodb-community@$MONGO_VERSION 2>/dev/null \
  && success "MongoDB detenido" \
  || warn "MongoDB no estaba en ejecución"

# ── Resumen ──────────────────────────────────────────────────────
echo ""
echo -e "${GREEN}═══════════════════════════════════════${NC}"
echo -e "${GREEN}  ✅ Todos los servicios detenidos      ${NC}"
echo -e "${GREEN}═══════════════════════════════════════${NC}"
echo ""
