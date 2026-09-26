@echo off
REM Dedicated v5 relay (one instance, shared by authority + all players).
setlocal
cd /d "%~dp0.."
set "PORT=19772"
if not "%~1"=="" set "PORT=%~1"
echo [DC2] starting v5 relay on 127.0.0.1:%PORT%
python tools\dc2_coop_server_v5.py --port %PORT%
