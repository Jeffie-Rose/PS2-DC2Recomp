@echo off
REM ============================================================================
REM  Dark Cloud 2 (PS2, SCUS_972.13) PC port - build ps2EntryRunner.exe
REM
REM  Auto-detects Visual Studio 2022 or 2019 (full VS or Build Tools). Prefers
REM  the clang-cl toolchain (VS-bundled LLVM or the LLVM workload) and falls
REM  back to MSVC cl. Uses Ninja when available, otherwise the default generator.
REM
REM  First build downloads the third-party deps (raylib, ffmpeg, ...) through
REM  CMake FetchContent, so it needs a network connection.
REM
REM  Output: build64\ps2xRuntime\ps2EntryRunner.exe
REM ============================================================================
setlocal
set "ROOT=%~dp0"
if "%ROOT:~-1%"=="\" set "ROOT=%ROOT:~0,-1%"
set "BUILD=%ROOT%\build64"

set "VCVARS="
for %%Y in (2022 2019) do (
  if not defined VCVARS if exist "C:\Program Files\Microsoft Visual Studio\%%Y\Community\VC\Auxiliary\Build\vcvars64.bat" set "VCVARS=C:\Program Files\Microsoft Visual Studio\%%Y\Community\VC\Auxiliary\Build\vcvars64.bat"
  if not defined VCVARS if exist "C:\Program Files\Microsoft Visual Studio\%%Y\Professional\VC\Auxiliary\Build\vcvars64.bat" set "VCVARS=C:\Program Files\Microsoft Visual Studio\%%Y\Professional\VC\Auxiliary\Build\vcvars64.bat"
  if not defined VCVARS if exist "C:\Program Files\Microsoft Visual Studio\%%Y\Enterprise\VC\Auxiliary\Build\vcvars64.bat" set "VCVARS=C:\Program Files\Microsoft Visual Studio\%%Y\Enterprise\VC\Auxiliary\Build\vcvars64.bat"
  if not defined VCVARS if exist "C:\Program Files (x86)\Microsoft Visual Studio\%%Y\BuildTools\VC\Auxiliary\Build\vcvars64.bat" set "VCVARS=C:\Program Files (x86)\Microsoft Visual Studio\%%Y\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
)
if not defined VCVARS (
  echo [!] Visual Studio 2022 or 2019 ^(or Build Tools^) not found.
  echo     Install the "Desktop development with C++" workload first.
  exit /b 1
)
echo [*] Using %VCVARS%
call "%VCVARS%" >nul
if errorlevel 1 ( echo [!] vcvars64 failed & exit /b 1 )

set "TOOLCHAIN="
where clang-cl >nul 2>&1
if not errorlevel 1 set "TOOLCHAIN=-DCMAKE_C_COMPILER=clang-cl -DCMAKE_CXX_COMPILER=clang-cl"
if defined TOOLCHAIN (echo [*] Toolchain: clang-cl) else (echo [*] Toolchain: MSVC cl)

set "GEN="
where ninja >nul 2>&1
if not errorlevel 1 set "GEN=-G Ninja -DCMAKE_MAKE_PROGRAM=ninja"

set "DISCONNECT="
if exist "%BUILD%\_deps\raylib-src" set "DISCONNECT=-DFETCHCONTENT_FULLY_DISCONNECTED=ON"

echo [*] Configuring CMake (Release)
cmake -S "%ROOT%" -B "%BUILD%" %GEN% %DISCONNECT% %TOOLCHAIN% -DCMAKE_BUILD_TYPE=Release
if errorlevel 1 ( echo [!] CMake configure failed & exit /b 1 )

echo [*] Building ps2EntryRunner
cmake --build "%BUILD%" --target ps2EntryRunner
exit /b %errorlevel%
