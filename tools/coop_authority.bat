@echo off
REM Hidden authority simulation (Role 3). Start this before the player windows.
setlocal
set "ROOT=%~dp0.."
if "%DC2_ISO%"=="" for %%I in ("Dark Cloud 2 (USA) (v2.00).iso" "[PS2](2001) Dark Cloud 2.iso" "Dark Cloud 2.iso") do if exist "%ROOT%\%%~I" set "DC2_ISO=%ROOT%\%%~I"
set "DC2_ISO_PATH=%DC2_ISO%"
if "%DC2_ISO_PATH%"=="" echo [!] Set DC2_ISO to your Dark Cloud 2 ISO path.
set "DC2_COOP_V5=1"
set "DC2_COOP_ROLE=authority"
if "%DC2_COOP_SERVER%"=="" set "DC2_COOP_SERVER=127.0.0.1:19772"
if "%DC2_COOP_SESSION%"=="" set "DC2_COOP_SESSION=local"
if "%DC2_PLAYER_NAME%"=="" set "DC2_PLAYER_NAME=Host"
REM Hidden simulation: never take local keyboard/gamepad input.
if "%DC2_NO_XINPUT%"=="" set "DC2_NO_XINPUT=1"
if "%DC2_COOP_HIDE_WINDOW%"=="" set "DC2_COOP_HIDE_WINDOW=1"
cd /d "%ROOT%"
if not exist "build64\ps2xRuntime\ps2EntryRunner.exe" (
  echo [!] Runner missing - run build_runner.bat first.
  exit /b 1
)
build64\ps2xRuntime\ps2EntryRunner.exe SCUS_972.13
