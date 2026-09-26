param(
    [Parameter(Mandatory = $true)][string]$Route,
    [int]$Seconds = 120,
    [string[]]$Set = @()
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$routes = Join-Path $root 'docs\dc2_plans\g525-routes'
$runner = Join-Path $root 'build64\ps2xRuntime\ps2EntryRunner.exe'
$logDir = Join-Path $root 'logs\phase1'
New-Item -ItemType Directory -Path $logDir -Force | Out-Null

if (-not (Test-Path -LiteralPath $runner)) { throw "Runner not found: $runner" }

$replay = Get-ChildItem -LiteralPath $routes -Filter "route*$Route*.replay.txt" -File |
    Select-Object -First 1
if (-not $replay) { throw "No replay found for '$Route' under $routes" }

function Get-EnvLine([string]$text, [string]$name) {
    $m = [regex]::Match($text, "(?m)^$name=`"(.+)`"\s*$")
    if ($m.Success) { return $m.Groups[1].Value }
    return $null
}

$text = Get-Content -LiteralPath $replay.FullName -Raw
$pad = Get-EnvLine $text 'DC2_PAD_INPUT'
$lst = Get-EnvLine $text 'DC2_LSTICK'
$rst = Get-EnvLine $text 'DC2_RSTICK'

$side = $replay.FullName -replace '\.replay\.txt$', '.lstick.txt'
if (Test-Path -LiteralPath $side) {
    $slst = Get-EnvLine (Get-Content -LiteralPath $side -Raw) 'DC2_LSTICK'
    if ($slst) { $lst = $slst; Write-Host "[*] using masked left-stick sidecar: $(Split-Path -Leaf $side)" }
}

$env:DC2_ISO_PATH = if ($env:DC2_ISO) { $env:DC2_ISO } else { 'Dark Cloud 2 (USA) (v2.00).iso' }
$env:DC2_PATCH_60FPS = '1'
$env:DC2_NO_XINPUT = '1'
$env:DC2_DEBUG_MENU = '1'
$env:DC2_G361_POS = '1'
$env:DC2_LOG_LEVEL = 'INFO'
foreach ($v in @('DC2_PAD_INPUT', 'DC2_LSTICK', 'DC2_RSTICK')) { Remove-Item "env:$v" -ErrorAction SilentlyContinue }
if ($pad) { $env:DC2_PAD_INPUT = $pad }
if ($lst) { $env:DC2_LSTICK = $lst }
if ($rst) { $env:DC2_RSTICK = $rst }
foreach ($kv in $Set) {
    $i = $kv.IndexOf('=')
    if ($i -gt 0) { Set-Item -Path ('env:' + $kv.Substring(0, $i)) -Value $kv.Substring($i + 1) }
}

$ts = Get-Date -Format 'yyyyMMdd_HHmmss'
$errLog = Join-Path $logDir "$Route`_$ts.err.log"
$outLog = Join-Path $logDir "$Route`_$ts.out.log"

Write-Host "[*] route=$($replay.Name) seconds=$Seconds"
Write-Host "[*] PAD_INPUT=$([bool]$pad) LSTICK=$([bool]$lst) RSTICK=$([bool]$rst)"
Write-Host "[*] launching runner..."

$p = Start-Process -FilePath $runner -ArgumentList 'SCUS_972.13' -WorkingDirectory $root `
    -PassThru -WindowStyle Minimized -RedirectStandardError $errLog -RedirectStandardOutput $outLog

$deadline = (Get-Date).AddSeconds($Seconds)
while ((Get-Date) -lt $deadline -and -not $p.HasExited) { Start-Sleep -Seconds 2 }
$early = $p.HasExited
if (-not $early) { Stop-Process -Id $p.Id -Force }
Write-Host ("[*] {0} (exit={1})" -f ($(if ($early) { 'process exited early' } else { "killed after $Seconds s" }), $p.ExitCode))

Write-Host ''
Write-Host '=== overrides ==='
Select-String -LiteralPath $errLog -Pattern 'Applying |Applied \d+ matching|Override resolution summary' -ErrorAction SilentlyContinue |
    ForEach-Object { $_.Line }

Write-Host ''
Write-Host '=== progression ([G361:pos], every 60 script frames) ==='
$pos = @(Select-String -LiteralPath $errLog -Pattern '\[G361:pos\]' -ErrorAction SilentlyContinue | ForEach-Object { $_.Line })
Write-Host "samples: $($pos.Count)"
if ($pos.Count -gt 0) {
    $pos | Select-Object -First 2
    Write-Host '  ...'
    $pos | Select-Object -Last 4
    $seq = @($pos | ForEach-Object {
        if ($_ -match 'loop=(\d+) mapNo=(\d+)') { "$($Matches[1])/$($Matches[2])" }
    } | Select-Object -Unique)
    Write-Host ("loop/map sequence: " + ($seq -join ' -> '))
}

Write-Host ''
Write-Host '=== first errors / unimplemented / missing assets ==='
Select-String -LiteralPath $errLog -Pattern 'Unimplemented|fioOpen error|fatal|FATAL|ASSERT|unhandled|Exception' -ErrorAction SilentlyContinue |
    Select-Object -First 12 | ForEach-Object { $_.Line }

Write-Host ''
Write-Host "stderr: $errLog"
Write-Host "stdout: $outLog"
