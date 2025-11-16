# MESIAS: Marine Environment Situational Awareness with Sonobuoys

Proyecto para la asignatura de Internet de las Cosas donde se usará la sensórica (simulada) de un grupo de sonoboyas. 

Ya que su funcionamiento es en local se necesitarán configurar una serie de dependencias que se describirán a continuación.

## Instalación y Configuración de MongoDB
### Instalar MongoDB local
#### macOS (Homebrew)
```
brew tap mongodb/brew
brew install mongodb-community@7.0
brew services start mongodb-community@7.0
```
#### Linux (Ubuntu)
```
sudo apt-get update
sudo apt-get install -y mongodb
sudo systemctl enable --now mongodb
```
#### Windows
Instalar MongoDB Community Server.
Ejecutarlo como servicio (por defecto: ```mongodb://localhost:27017```)
Verificación:
```
mongosh
> show dbs
```

### Crear la base de datos, colección e índices
Accede al shell:
```
mongosh
```
Crea la base de datos:
```
use ocean_iot
```
Crea la colección:
```
db.createCollection("telemetry")
```
Índices recomendados:
```
db.telemetry.createIndex({ ts: 1 },{ expireAfterSeconds: 90 * 24 * 3600 })
db.telemetry.createIndex({ id: 1, ts: -1 })
db.telemetry.createIndex({ pos: "2dsphere" })
```

Instala MongoDB Compass para visualizar la base de datos creada. Para ello establece una nueva conexión usando el puerto que se estableció, en este caso: ```mongodb://localhost:27017```.
