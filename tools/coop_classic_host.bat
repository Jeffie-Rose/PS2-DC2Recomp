@echo off
REM Classic v4 co-op - Player 1 / host (Max). Start tools\coop_classic_server.bat first.
setlocal
set "ROOT=%~dp0.."
if "%DC2_ISO%"=="" for %%I in ("Dark Cloud 2 (USA) (v2.00).iso" "[PS2](2001) Dark Cloud 2.iso" "Dark Cloud 2.iso") do if exist "%ROOT%\%%~I" set "DC2_ISO=%ROOT%\%%~I"
set "DC2_ISO_PATH=%DC2_ISO%"
if "%DC2_ISO_PATH%"=="" echo [!] Set DC2_ISO to your Dark Cloud 2 ISO path.
set "DC2_COOP=1"
set "DC2_COOP_ROLE=host"
if "%DC2_COOP_SERVER%"=="" set "DC2_COOP_SERVER=127.0.0.1:19772"
if "%DC2_COOP_SESSION%"=="" set "DC2_COOP_SESSION=local"
set "DC2_COOP_LOCAL_PORT=0"
REM Both windows load the same hero (only one costume texture is resident).
set "DC2_G127_SEED_MENU=1"
set "DC2_G376_SEED_FMV_SKIP=1"
set "DC2_PATCH_60FPS=1"
set "DC2_DEBUG_MENU=1"
if not exist "%ROOT%\coop_saves\host" mkdir "%ROOT%\coop_saves\host"
if exist "%ROOT%\mc0" xcopy /E /I /Y /Q "%ROOT%\mc0" "%ROOT%\coop_saves\host" >nul 2>&1
set "DC2_MEMCARD1_DIR=%ROOT%\coop_saves\host"
cd /d "%ROOT%"
if not exist "build64\ps2xRuntime\ps2EntryRunner.exe" (
  echo [!] Runner not built - run build_runner.bat first.
  exit /b 1
)
build64\ps2xRuntime\ps2EntryRunner.exe SCUS_972.13
