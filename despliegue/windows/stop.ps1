# ═══════════════════════════════════════════════════════════════
#  stop.ps1 — Script de parada de servicios (Windows)
# ═══════════════════════════════════════════════════════════════
#
#  Para los servicios en orden inverso al arranque:
#    4. Servidor JavaScript
#    3. Node-RED
#    2. RabbitMQ (Docker)
#    1. MongoDB
#
#  Uso:
#    .\stop.ps1
# ═══════════════════════════════════════════════════════════════

# ── Configuración ───────────────────────────────────────────────

$MONGO_VERSION    = "7.0"
$RABBIT_CONTAINER = "rabbitmq"
$LOGS_DIR         = ".\logs"

# ── Funciones de utilidad ───────────────────────────────────────

New-Item -ItemType Directory -Force -Path $LOGS_DIR | Out-Null
$LogFile = "$LOGS_DIR\stop.log"

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

function Stop-ByPid($pidFile, $service) {
    if (Test-Path $pidFile) {
        $pid = Get-Content $pidFile
        try {
            $proc = Get-Process -Id $pid -ErrorAction Stop
            Log "Parando $service (PID $pid)..."
            Stop-Process -Id $pid -Force
            Start-Sleep -Seconds 1
            Success "$service detenido"
        } catch {
            Warn "$service ya no estaba en ejecucion"
        }
        Remove-Item $pidFile -Force
    } else {
        # Fallback: buscar por nombre de proceso
        Warn "No se encontro PID de $service, buscando por proceso..."
        $proc = Get-Process -Name $service -ErrorAction SilentlyContinue
        if ($proc) {
            Stop-Process -Name $service -Force
            Success "$service detenido"
        } else {
            Warn "$service no estaba en ejecucion"
        }
    }
}

# ── Inicio ──────────────────────────────────────────────────────

Write-Host ""
Write-Host "=======================================" -ForegroundColor Cyan
Write-Host "     Parada de servicios — Windows     " -ForegroundColor Cyan
Write-Host "=======================================" -ForegroundColor Cyan
Write-Host ""

# ── 4. Servidor JavaScript ──────────────────────────────────────
Log "Parando servidor JavaScript..."
$jsPid = "$env:TEMP\js-server.pid"
if (Test-Path $jsPid) {
    $pid = Get-Content $jsPid
    try {
        Stop-Process -Id $pid -Force -ErrorAction Stop
        Success "Servidor JS detenido"
    } catch {
        Warn "Servidor JS ya no estaba en ejecucion"
    }
    Remove-Item $jsPid -Force
} else {
    $proc = Get-Process | Where-Object { $_.MainWindowTitle -match "wot-server" -or $_.ProcessName -eq "node" } | Select-Object -First 1
    if ($proc) {
        Stop-Process -Id $proc.Id -Force
        Success "Servidor JS detenido"
    } else {
        Warn "Servidor JS no estaba en ejecucion"
    }
}

# ── 3. Node-RED ─────────────────────────────────────────────────
Log "Parando Node-RED..."
$nodePid = "$env:TEMP\nodered.pid"
if (Test-Path $nodePid) {
    $pid = Get-Content $nodePid
    try {
        Stop-Process -Id $pid -Force -ErrorAction Stop
        Success "Node-RED detenido"
    } catch {
        Warn "Node-RED ya no estaba en ejecucion"
    }
    Remove-Item $nodePid -Force
} else {
    # Buscar el proceso node que ejecuta node-red
    $proc = Get-WmiObject Win32_Process | Where-Object { $_.CommandLine -match "node-red" } | Select-Object -First 1
    if ($proc) {
        Stop-Process -Id $proc.ProcessId -Force
        Success "Node-RED detenido"
    } else {
        Warn "Node-RED no estaba en ejecucion"
    }
}

# ── 2. RabbitMQ (Docker) ────────────────────────────────────────
Log "Parando RabbitMQ (Docker)..."
$runningContainers = docker ps --format "{{.Names}}"
if ($runningContainers -match $RABBIT_CONTAINER) {
    docker stop $RABBIT_CONTAINER 2>&1 | Add-Content -Path "$LOGS_DIR\rabbitmq.log"
    Success "RabbitMQ detenido"
} else {
    Warn "RabbitMQ no estaba en ejecucion"
}

# ── 1. MongoDB ──────────────────────────────────────────────────
Log "Parando MongoDB..."
$mongoService = Get-Service -Name "MongoDB" -ErrorAction SilentlyContinue
if ($mongoService -and $mongoService.Status -eq "Running") {
    Stop-Service -Name "MongoDB" -Force
    Success "MongoDB detenido"
} else {
    # Si no está como servicio, parar el proceso mongod
    $proc = Get-Process -Name "mongod" -ErrorAction SilentlyContinue
    if ($proc) {
        Stop-Process -Name "mongod" -Force
        Success "MongoDB detenido"
    } else {
        Warn "MongoDB no estaba en ejecucion"
    }
}

# ── Resumen ──────────────────────────────────────────────────────
Write-Host ""
Write-Host "=======================================" -ForegroundColor Green
Write-Host "  OK Todos los servicios detenidos     " -ForegroundColor Green
Write-Host "=======================================" -ForegroundColor Green
Write-Host ""
