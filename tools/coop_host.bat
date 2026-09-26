@echo off
REM Player 1 / host window (Role 1).
setlocal
set "ROOT=%~dp0.."
if "%DC2_ISO%"=="" for %%I in ("Dark Cloud 2 (USA) (v2.00).iso" "[PS2](2001) Dark Cloud 2.iso" "Dark Cloud 2.iso") do if exist "%ROOT%\%%~I" set "DC2_ISO=%ROOT%\%%~I"
set "DC2_ISO_PATH=%DC2_ISO%"
if "%DC2_ISO_PATH%"=="" echo [!] Set DC2_ISO to your Dark Cloud 2 ISO path.
set "DC2_COOP_V5=1"
set "DC2_COOP_ROLE=host"
if "%DC2_COOP_SERVER%"=="" set "DC2_COOP_SERVER=127.0.0.1:19772"
if "%DC2_COOP_SESSION%"=="" set "DC2_COOP_SESSION=local"
if "%DC2_PLAYER_NAME%"=="" set "DC2_PLAYER_NAME=Alpha"
REM Player 1 reads the P1 layout (WASD + J/K/L/I) / first controller.
if "%DC2_COOP_LOCAL_PORT%"=="" set "DC2_COOP_LOCAL_PORT=0"
cd /d "%ROOT%"
build64\ps2xRuntime\ps2EntryRunner.exe SCUS_972.13
