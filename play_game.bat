@echo off
REM Single-player launch of the recomp runner.
REM Data source resolution: extracted DATA\ folder, DC2_ISO env var, or an ISO in the repo root.
setlocal
set "ROOT=%~dp0"

set "ELF=SCUS_972.13"
if exist "DATA\SCUS_972.13" (
  set "ELF=DATA\SCUS_972.13"
  set "DC2_DATA_DIR=%ROOT%\DATA"
)

if "%DC2_ISO%"=="" (
  for %%I in ("Dark Cloud 2 (USA) (v2.00).iso" "[PS2](2001) Dark Cloud 2.iso" "Dark Cloud 2.iso") do if exist "%ROOT%\%%~I" set "DC2_ISO=%ROOT%\%%~I"
)
if not "%DC2_ISO%"=="" set "DC2_ISO_PATH=%DC2_ISO%"

if not defined DC2_DATA_DIR if "%DC2_ISO_PATH%"=="" (
  echo [!] No game data found. Put your Dark Cloud 2 ISO in the repo root ^(or set DC2_ISO^), or extract it to DATA\.
  pause
  exit /b 1
)

if exist "build64\ps2xRuntime\ps2EntryRunner.exe" set "RUNNER=build64\ps2xRuntime\ps2EntryRunner.exe"
if not defined RUNNER if exist "bin\ps2EntryRunner.exe" set "RUNNER=bin\ps2EntryRunner.exe"
if not defined RUNNER (
  echo [!] Runner not found - run build.bat first.
  pause
  exit /b 1
)

if not exist "%ELF%" (
  echo [!] %ELF% missing - copy it from the root of your Dark Cloud 2 disc, or extract the ISO to DATA\.
  pause
  exit /b 1
)

cd /d "%ROOT%"
"%RUNNER%" %ELF%
