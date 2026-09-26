@echo off
REM ============================================================================
REM  DC2_Canonical - build the Dark Cloud 2 recomp runner (PS2Recomp fork)
REM
REM  Usage:
REM    build_runner.bat            Configure + build ps2EntryRunner (full, slow)
REM    build_runner.bat runtime    Configure + build ps2_runtime only (fast-ish)
REM    build_runner.bat clean ...  Delete CMakeCache.txt first (full reconfigure)
REM
REM  Toolchain is the VS2019 BuildTools LLVM clang-cl + bundled Ninja, matching
REM  the original build64 configuration.
REM ============================================================================
setlocal
set "ROOT=%~dp0"
if "%ROOT:~-1%"=="\" set "ROOT=%ROOT:~0,-1%"
set "BUILD=%ROOT%\build64"

set "VCVARS=C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
set "CLANGCL=C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\Llvm\x64\bin\clang-cl.exe"
set "NINJA=C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\Ninja\ninja.exe"

if not exist "%VCVARS%"  ( echo [!] vcvars64 not found: "%VCVARS%" & exit /b 1 )
if not exist "%CLANGCL%" ( echo [!] clang-cl not found: "%CLANGCL%" & exit /b 1 )
if not exist "%NINJA%"   ( echo [!] ninja not found:    "%NINJA%"   & exit /b 1 )

set "MODE=%~1"
if /I "%MODE%"=="clean" (
    echo [*] Removing CMakeCache.txt for a clean reconfigure
    if exist "%BUILD%\CMakeCache.txt" del /q "%BUILD%\CMakeCache.txt"
    set "MODE=%~2"
)

echo [*] Setting up MSVC x64 environment
call "%VCVARS%" >nul
if errorlevel 1 ( echo [!] vcvars64 failed & exit /b 1 )

REM Seed-check: this tree ships with build64/_deps already populated, so tell
REM FetchContent not to re-download raylib etc. Delete build64\_deps to force a
REM fresh fetch on a clean machine (then this flag is simply skipped).
set "DISCONNECT="
if exist "%BUILD%\_deps\raylib-src" set "DISCONNECT=-DFETCHCONTENT_FULLY_DISCONNECTED=ON"

echo [*] Configuring CMake (Ninja + clang-cl, Release)
cmake -S "%ROOT%" -B "%BUILD%" -G Ninja ^
    -DCMAKE_BUILD_TYPE=Release ^
    %DISCONNECT% ^
    -DCMAKE_C_COMPILER:FILEPATH="%CLANGCL%" ^
    -DCMAKE_CXX_COMPILER:FILEPATH="%CLANGCL%" ^
    -DCMAKE_MAKE_PROGRAM:FILEPATH="%NINJA%"
if errorlevel 1 ( echo [!] CMake configure failed & exit /b 1 )

if /I "%MODE%"=="runtime" (
    echo [*] Building target ps2_runtime
    cmake --build "%BUILD%" --target ps2_runtime
) else (
    echo [*] Building target ps2EntryRunner
    cmake --build "%BUILD%" --target ps2EntryRunner
)
exit /b %errorlevel%
