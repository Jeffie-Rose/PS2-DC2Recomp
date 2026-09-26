param(
    [string]$Out = "dist\DC2-Singleplayer",
    [switch]$NoZip
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$outDir = Join-Path $root $Out
$binSrc = Join-Path $root 'build64\ps2xRuntime'

if (-not (Test-Path -LiteralPath (Join-Path $binSrc 'ps2EntryRunner.exe'))) {
    throw "Runner not built: $(Join-Path $binSrc 'ps2EntryRunner.exe')"
}

if (Test-Path -LiteralPath $outDir) { Remove-Item -LiteralPath $outDir -Recurse -Force }
$binDir = Join-Path $outDir 'bin'
$toolsDir = Join-Path $outDir 'tools'
$modsDir = Join-Path $outDir 'Mods'
$cfgDir = Join-Path $outDir 'Config'
$docsDir = Join-Path $outDir 'docs'
foreach ($d in @($outDir, $binDir, $toolsDir, $modsDir, $cfgDir, $docsDir)) {
    New-Item -ItemType Directory -Path $d -Force | Out-Null
}

# ---- runtime: executable + every staged DLL next to it -----------------------
Copy-Item -LiteralPath (Join-Path $binSrc 'ps2EntryRunner.exe') -Destination $binDir
Get-ChildItem -LiteralPath $binSrc -Filter '*.dll' -File | ForEach-Object {
    Copy-Item -LiteralPath $_.FullName -Destination $binDir
}

# ---- tools -------------------------------------------------------------------
$toolFiles = @(
    'launcher.bat', 'play_game.bat', 'open_mods.bat',
    'tools\launcher.bat', 'tools\dc2_launcher.py',
    'tools\mods.bat', 'tools\mod_manager.py',
    'tools\coop_classic_server.bat', 'tools\coop_classic_host.bat', 'tools\coop_classic_guest.bat',
    'tools\coop_server.bat', 'tools\coop_authority.bat', 'tools\coop_host.bat', 'tools\coop_guest.bat',
    'tools\dc2_coop_server.py', 'tools\dc2_coop_server_v5.py'
)
foreach ($rel in $toolFiles) {
    $src = Join-Path $root $rel
    if (Test-Path -LiteralPath $src) {
        $dst = Join-Path $outDir $rel
        $dstParent = Split-Path -Parent $dst
        if (-not (Test-Path -LiteralPath $dstParent)) { New-Item -ItemType Directory -Path $dstParent -Force | Out-Null }
        Copy-Item -LiteralPath $src -Destination $dst
    }
}

# ---- mods (example) -----------------------------------------------------------
Copy-Item -LiteralPath (Join-Path $root 'Mods\Example Mod') -Destination (Join-Path $modsDir 'Example Mod') -Recurse -Force

# ---- docs ---------------------------------------------------------------------
foreach ($rel in @('README_DC2_CANONICAL.md', 'docs\MODDING.md', 'docs\COOP.md', 'docs\COOP_PLAYTEST.md')) {
    $src = Join-Path $root $rel
    if (Test-Path -LiteralPath $src) { Copy-Item -LiteralPath $src -Destination $docsDir }
}
if (Test-Path -LiteralPath (Join-Path $root 'launcher.bat')) {
    Copy-Item -LiteralPath (Join-Path $root 'launcher.bat') -Destination $outDir
}

# ---- default launcher settings -------------------------------------------------
@'
{
  "iso": "PUT YOUR DARK CLOUD 2 ISO PATH HERE",
  "fps60": false,
  "debug_menu": false,
  "textures": false,
  "coop_server": "127.0.0.1:19772",
  "coop_http": 19773,
  "coop_session": "local",
  "player_name": "Player",
  "relays": []
}
'@ | Set-Content -LiteralPath (Join-Path $cfgDir 'launcher_settings.json') -Encoding UTF8

# ---- README_FIRST ---------------------------------------------------------------
@'
Dark Cloud 2 (recomp) - single player package
=============================================

Requirements
------------
1. Your own legally owned Dark Cloud 2 disc image (NTSC-U SCUS-97213).
2. SCUS_972.13 (the game ELF) from the root of your disc. Copy it into THIS
   folder (next to play_game.bat).
   - If you only have the ISO, extract SCUS_972.13 from it once (e.g. with 7-Zip).

Run
---
1. Open Config\launcher_settings.json and set "iso" to your ISO path
   (or set the DC2_ISO environment variable).
2. Double-click play_game.bat  (or launcher.bat for the graphical launcher).

Options (environment variables, or the launcher's Play tab)
-----------------------------------------------------------
DC2_ISO_PATH      path to your ISO
DC2_PATCH_60FPS=1 60 FPS patch (see note below)
DC2_DEBUG_MENU=1  Level-5 debug menu (warp to any floor/town)
DC2_TEXTURE_REPLACEMENTS=1  HD texture pack from Mods\HD Texture

MODS
----
Drop mod folders in Mods\<name>\ with a modinfo.json and optional main.lua.
See docs\MODDING.md. 'tools\mods.bat list' / 'validate' manage them.

CO-OP (experimental, two windows)
---------------------------------
tools\coop_classic_server.bat, then coop_classic_host.bat and coop_classic_guest.bat.
See docs\COOP.md.

NOTE ON 60 FPS
--------------
Dark Cloud 2 runs its game logic at 30 Hz with fixed per-frame increments, and
has no delta-time. The 60 FPS patch raises the frame rate, which also doubles
simulation speed (monsters, animation, timers). It is an optional "turbo" mode,
not an authentic 60 FPS mode. Leave it off for correct speed.

This package contains no game data. It requires your own ISO and ELF.
'@ | Set-Content -LiteralPath (Join-Path $outDir 'README_FIRST.txt') -Encoding UTF8

$size = (Get-ChildItem -LiteralPath $outDir -Recurse -File | Measure-Object -Property Length -Sum).Sum
Write-Host ("[+] package: {0} ({1} MB)" -f $outDir, [math]::Round($size / 1MB, 1))

if (-not $NoZip) {
    $zip = Join-Path $root 'dist\DC2-Singleplayer.zip'
    if (Test-Path -LiteralPath $zip) { Remove-Item -LiteralPath $zip -Force }
    Compress-Archive -Path (Join-Path $outDir '*') -DestinationPath $zip
    $zsize = (Get-Item -LiteralPath $zip).Length
    Write-Host ("[+] zip: {0} ({1} MB)" -f $zip, [math]::Round($zsize / 1MB, 1))
}
