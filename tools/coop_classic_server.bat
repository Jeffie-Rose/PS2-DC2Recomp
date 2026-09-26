@echo off
REM Classic v4 co-op relay (one instance, shared by host + guest).
setlocal
cd /d "%~dp0.."
set "PORT=19772"
if not "%~1"=="" set "PORT=%~1"
echo [DC2] starting classic v4 relay on 127.0.0.1:%PORT%
python tools\dc2_coop_server.py --port %PORT%
