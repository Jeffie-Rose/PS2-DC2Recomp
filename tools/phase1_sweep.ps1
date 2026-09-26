param(
    [int]$Seconds = 100
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$routesDir = Join-Path $root 'docs\dc2_plans\g525-routes'
$runner = Join-Path $root 'build64\ps2xRuntime\ps2EntryRunner.exe'
$logDir = Join-Path $root 'logs\phase1'
New-Item -ItemType Directory -Path $logDir -Force | Out-Null
$ts = Get-Date -Format 'yyyyMMdd_HHmmss'
$csv = Join-Path $logDir "sweep_$ts.csv"

$routes = @(
    @{ Key = 's05';         Match = 'route1-s05-cutscene';           NoLstick = $true }
    @{ Key = 'combat';      Match = 'route2-palace-combat';          NoLstick = $false }
    @{ Key = 'fight';       Match = 'route3-palace-fight-palmbrinks'; NoLstick = $false }
    @{ Key = 'ridepod';     Match = 'route4-ridepod-boss';           NoLstick = $false }
    @{ Key = 'dungeon6';    Match = 'route5-dungeon6-transform';     NoLstick = $false }
    @{ Key = 'georama';     Match = 'route6-firerain-georama';       NoLstick = $false }
    @{ Key = 'dungeon6fix'; Match = 'route7-dungeon6-assetfix';      NoLstick = $false }
    @{ Key = 'dungeon6v';   Match = 'route8-dungeon6-verify';        NoLstick = $true }
    @{ Key = 'map125';      Match = 'route9-map125';                 NoLstick = $true }
    @{ Key = 's05bandage';  Match = 'route10-s05-bandage';           NoLstick = $true }
    @{ Key = 's03';         Match = 'route11-s03-cutscene';          NoLstick = $true }
    @{ Key = 'dungeon1';    Match = 'route12-dungeon1-d02f01';       NoLstick = $false }
    @{ Key = 'dragon';      Match = 'route13-heavy-new';             NoLstick = $true }
)

function Get-EnvLine([string]$text, [string]$name) {
    $m = [regex]::Match($text, "(?m)^$name=`"(.+)`"\s*$")
    if ($m.Success) { return $m.Groups[1].Value }
    return $null
}

$results = @()
foreach ($r in $routes) {
    $replay = Get-ChildItem -LiteralPath $routesDir -Filter "*$($r.Match)*.replay.txt" -File | Select-Object -First 1
    if (-not $replay) { Write-Host "[!] no replay for $($r.Key)"; continue }

    $text = Get-Content -LiteralPath $replay.FullName -Raw
    $pad = Get-EnvLine $text 'DC2_PAD_INPUT'
    $lst = Get-EnvLine $text 'DC2_LSTICK'
    $side = $replay.FullName -replace '\.replay\.txt$', '.lstick.txt'
    if (Test-Path -LiteralPath $side) {
        $slst = Get-EnvLine (Get-Content -LiteralPath $side -Raw) 'DC2_LSTICK'
        if ($slst) { $lst = $slst }
    }
    if ($r.NoLstick) { $lst = $null }

    $env:DC2_ISO_PATH = if ($env:DC2_ISO) { $env:DC2_ISO } else { 'Dark Cloud 2 (USA) (v2.00).iso' }
    $env:DC2_PATCH_60FPS = '1'
    $env:DC2_NO_XINPUT = '1'
    $env:DC2_DEBUG_MENU = '1'
    $env:DC2_G361_POS = '1'
    $env:DC2_LOG_LEVEL = 'INFO'
    foreach ($v in @('DC2_PAD_INPUT', 'DC2_LSTICK', 'DC2_RSTICK')) { Remove-Item "env:$v" -ErrorAction SilentlyContinue }
    if ($pad) { $env:DC2_PAD_INPUT = $pad }
    if ($lst) { $env:DC2_LSTICK = $lst }

    $err = Join-Path $logDir "sweep_$($r.Key)_$ts.err.log"
    $out = Join-Path $logDir "sweep_$($r.Key)_$ts.out.log"
    Write-Host ("[*] {0,-11} {1}" -f $r.Key, $replay.Name)

    Get-Process ps2EntryRunner -ErrorAction SilentlyContinue | Stop-Process -Force
    $p = Start-Process -FilePath $runner -ArgumentList 'SCUS_972.13' -WorkingDirectory $root `
        -PassThru -WindowStyle Minimized -RedirectStandardError $err -RedirectStandardOutput $out
    $deadline = (Get-Date).AddSeconds($Seconds)
    while ((Get-Date) -lt $deadline -and -not $p.HasExited) { Start-Sleep -Seconds 2 }
    $early = $p.HasExited
    if (-not $early) { Stop-Process -Id $p.Id -Force }

    $pos = @(Select-String -LiteralPath $err -Pattern '\[G361:pos\]' -ErrorAction SilentlyContinue | ForEach-Object { $_.Line })
    $loops = @($pos | ForEach-Object { if ($_ -match 'loop=(\d+)') { [int]$Matches[1] } } | Select-Object -Unique | Sort-Object)
    $lastPos = ''
    if ($pos.Count -gt 0 -and $pos[-1] -match 'pos=\(([^)]+)\)') { $lastPos = $Matches[1] }
    $missing = @(Select-String -LiteralPath $err -Pattern "fioOpen error: fopen failed for '([^']+)'" -ErrorAction SilentlyContinue |
        ForEach-Object { if ($_.Line -match "fopen failed for '([^']+)'") { $Matches[1] } } | Select-Object -Unique)
    $bad = @(Select-String -LiteralPath $err -Pattern 'Unimplemented|ASSERT|fatal error|FATAL' -ErrorAction SilentlyContinue).Count
    $mounted = [bool](Select-String -LiteralPath $err -Pattern '\[ISO\] Mounted|\[DATA\] Mounted' -Quiet -ErrorAction SilentlyContinue)

    $row = [pscustomobject]@{
        route       = $r.Key
        seconds     = $Seconds
        exitedEarly = $early
        mounted     = $mounted
        posSamples  = $pos.Count
        loops       = ($loops -join '/')
        lastPos     = $lastPos
        missingFiles = $missing.Count
        fatal       = $bad
    }
    $results += $row
    Write-Host ("    mounted={0} samples={1} loops={2} missing={3} fatal={4} early={5}" -f `
        $mounted, $pos.Count, ($loops -join '/'), $missing.Count, $bad, $early)
}

$results | Export-Csv -LiteralPath $csv -NoTypeInformation
Write-Host ''
Write-Host "=== sweep summary ==="
$results | Format-Table route, exitedEarly, mounted, posSamples, loops, lastPos, missingFiles, fatal -AutoSize
Write-Host "csv: $csv"
