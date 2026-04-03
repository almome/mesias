# ═══════════════════════════════════════════════════════════════
#  deploy.ps1 — Script de despliegue (Windows)
# ═══════════════════════════════════════════════════════════════
#
#  Servicios que arranca (en orden):
#    1. MongoDB 7.0
#    2. RabbitMQ (Docker)
#    3. Node-RED
#    4. Servidor JavaScript (wot-server.js - puerto 8484)
#
#  Uso:
#    Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
#    .\deploy.ps1
# ═══════════════════════════════════════════════════════════════

$ErrorActionPreference = "Stop"

# ── Configuración — ajusta estas variables ──────────────────────

$MONGO_VERSION       = "7.0"
$MONGO_DB_NAME       = "Sonobuoys"

$RABBIT_CONTAINER    = "rabbitmq"
$RABBIT_PORT         = 5672
$RABBIT_MGMT_PORT    = 15672

$NODERED_PORT        = 1880
$NODERED_DIR         = "$env:USERPROFILE\.node-red"

$JS_SERVER_DIR       = "$env:USERPROFILE\Documents\Master Investigacion\SDSA\Trabajo Practico\mesias" #MODIFICAR: poner la ruta donde tengas la carpeta del proyecto de IC
$JS_SERVER_FILE      = "wot-server.js"
$JS_SERVER_PORT      = 8484

$LOGS_DIR            = ".\logs"

# ── Funciones de utilidad ───────────────────────────────────────

New-Item -ItemType Directory -Force -Path $LOGS_DIR | Out-Null
$LogFile = "$LOGS_DIR\deploy.log"

function Log($msg) {
    $line = "[$(Get-Date -Format 'HH:mm:ss')] $msg"
    Write-Host $line -ForegroundColor Cyan
    Add-Content -Path $LogFile -Value $line
}

function Success($msg) {
    $line = "[$(Get-Date -Format 'HH:mm:ss')] OK $msg"
    Write-Host $line -ForegroundColor Green
    Add-Content -Path $LogFile -Value $line
}

function Warn($msg) {
    $line = "[$(Get-Date -Format 'HH:mm:ss')] AVISO $msg"
    Write-Host $line -ForegroundColor Yellow
    Add-Content -Path $LogFile -Value $line
}

function Err($msg) {
    $line = "[$(Get-Date -Format 'HH:mm:ss')] ERROR $msg"
    Write-Host $line -ForegroundColor Red
    Add-Content -Path $LogFile -Value $line
    exit 1
}

function Wait-ForPort($port, $service) {
    $retries = 25
    Log "Esperando a que $service este listo en el puerto $port..."
    while ($retries -gt 0) {
        try {
            $tcp = New-Object System.Net.Sockets.TcpClient("localhost", $port)
            $tcp.Close()
            Success "$service listo"
            return
        } catch {}
        $retries--
        Start-Sleep -Seconds 2
    }
    Err "$service no arranco a tiempo. Revisa $LOGS_DIR\$service.log"
}

# ── Verificar que Docker esta corriendo ─────────────────────────

Log "Verificando Docker..."
try {
    docker info 2>&1 | Out-Null
    Success "Docker disponible"
} catch {
    Err "Docker no esta en ejecucion. Abre Docker Desktop primero."
}

# ── Inicio ──────────────────────────────────────────────────────

Write-Host ""
Write-Host "=======================================" -ForegroundColor Cyan
Write-Host "       Despliegue — Windows            " -ForegroundColor Cyan
Write-Host "=======================================" -ForegroundColor Cyan
Write-Host ""

# ── 1. MongoDB ──────────────────────────────────────────────────
Log "Arrancando MongoDB..."
$mongoService = Get-Service -Name "MongoDB" -ErrorAction SilentlyContinue
if ($mongoService -and $mongoService.Status -eq "Running") {
    Warn "MongoDB ya esta en ejecucion, saltando..."
} else {
    try {
        Start-Service -Name "MongoDB" 2>&1 | Out-Null
    } catch {
        # Si no esta como servicio, intentar arrancar mongod directamente
        Start-Process "mongod" -ArgumentList "--config `"C:\Program Files\MongoDB\Server\$MONGO_VERSION\bin\mongod.cfg`"" `
            -RedirectStandardOutput "$LOGS_DIR\mongodb.log" -WindowStyle Hidden
    }
}
Wait-ForPort 27017 "MongoDB"

# Crear/conectar la base de datos Sonobuoys
Log "Conectando base de datos '$MONGO_DB_NAME'..."
$mongoScript = "db = db.getSiblingDB('$MONGO_DB_NAME'); db.createCollection('_init', { capped: true, size: 1 }); print('Base de datos lista: ' + db.getName());"
mongosh --quiet --eval $mongoScript 2>&1 | Add-Content -Path "$LOGS_DIR\mongodb.log"
Success "Base de datos '$MONGO_DB_NAME' lista"

# ── 2. RabbitMQ (Docker) ────────────────────────────────────────
Log "Arrancando RabbitMQ (Docker)..."
$runningContainers = docker ps --format "{{.Names}}"
if ($runningContainers -match "^$RABBIT_CONTAINER$") {
    Warn "RabbitMQ ya esta en ejecucion, saltando..."
} else {
    docker start $RABBIT_CONTAINER 2>&1 | Add-Content -Path "$LOGS_DIR\rabbitmq.log"
    if ($LASTEXITCODE -ne 0) { Err "No se pudo arrancar el contenedor '$RABBIT_CONTAINER'" }
}
Wait-ForPort $RABBIT_PORT "RabbitMQ AMQP"
Wait-ForPort $RABBIT_MGMT_PORT "RabbitMQ Management"
Success "RabbitMQ listo -> http://localhost:$RABBIT_MGMT_PORT"

# ── 3. Node-RED ─────────────────────────────────────────────────
Log "Arrancando Node-RED..."
try {
    $tcp = New-Object System.Net.Sockets.TcpClient("localhost", $NODERED_PORT)
    $tcp.Close()
    Warn "Node-RED ya esta en ejecucion, saltando..."
} catch {
    $noderedProc = Start-Process "node-red" `
        -ArgumentList "--userDir `"$NODERED_DIR`"" `
        -RedirectStandardOutput "$LOGS_DIR\nodered.log" `
        -PassThru -WindowStyle Hidden
    $noderedProc.Id | Out-File -FilePath "$env:TEMP\nodered.pid"
}
Wait-ForPort $NODERED_PORT "Node-RED"
Success "Node-RED listo -> http://localhost:$NODERED_PORT"

# ── 4. Servidor JavaScript ──────────────────────────────────────
Log "Comprobando dependencias del servidor JS..."
if (-not (Test-Path "$JS_SERVER_DIR\$JS_SERVER_FILE")) {
    Err "No se encontro $JS_SERVER_FILE en: $JS_SERVER_DIR"
}
Push-Location $JS_SERVER_DIR
npm install 2>&1 | Add-Content -Path "$PSScriptRoot\$LOGS_DIR\js-server.log"
if ($LASTEXITCODE -ne 0) { Err "npm install fallo. Revisa $LOGS_DIR\js-server.log" }
Success "Dependencias listas"

Log "Arrancando servidor JavaScript (wot-server)..."
try {
    $tcp = New-Object System.Net.Sockets.TcpClient("localhost", $JS_SERVER_PORT)
    $tcp.Close()
    Warn "Servidor JS ya esta en ejecucion, saltando..."
} catch {
    $jsProc = Start-Process "node" `
        -ArgumentList $JS_SERVER_FILE `
        -RedirectStandardOutput "$PSScriptRoot\$LOGS_DIR\js-server.log" `
        -PassThru -WindowStyle Hidden
    $jsProc.Id | Out-File -FilePath "$env:TEMP\js-server.pid"
}
Pop-Location
Wait-ForPort $JS_SERVER_PORT "Servidor JS"
Success "Servidor JS listo -> http://localhost:$JS_SERVER_PORT"

# ── Resumen final ───────────────────────────────────────────────
Write-Host ""
Write-Host "=======================================" -ForegroundColor Green
Write-Host "  OK Todos los servicios arrancados    " -ForegroundColor Green
Write-Host "=======================================" -ForegroundColor Green
Write-Host ""
Write-Host "  MongoDB       -> puerto 27017"
Write-Host "  RabbitMQ      -> puerto $RABBIT_PORT  | http://localhost:$RABBIT_MGMT_PORT"
Write-Host "  Node-RED      -> puerto $NODERED_PORT  | http://localhost:$NODERED_PORT"
Write-Host "  Servidor JS   -> puerto $JS_SERVER_PORT  | http://localhost:$JS_SERVER_PORT"
Write-Host ""
Write-Host "  Logs en: $LOGS_DIR\" -ForegroundColor Cyan
Write-Host ""
