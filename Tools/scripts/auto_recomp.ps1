$tomlPath = "aerofightersassaul.toml"
$exePath = ".\Tools\N64Recomp.exe"

while ($true) {
    Write-Host "Running Recompiler..." -ForegroundColor Cyan
    $output = & $exePath $tomlPath 2>&1
    $outputStr = $output | Out-String
    
    # Check for "Error recompiling" pattern
    if ($outputStr -match "Error recompiling (func_[0-9A-F]+)") {
        $funcName = $Matches[1]
        Write-Host "Caught error in $funcName. Adding to ignore list..." -ForegroundColor Yellow
        
        $content = Get-Content $tomlPath -Raw
        # Use regex to find the ignored array and insert the new function
        if ($content -match '(?s)(ignored\s*=\s*\[)(.*?)(\])') {
            $prefix = $Matches[1]
            $list = $Matches[2]
            $suffix = $Matches[3]
            
            # Check if already ignored
            if ($list -notmatch "`"$funcName`"") {
                $newList = "`r`n    `"$funcName`"," + $list
                $newContent = $content.Replace($Matches[0], $prefix + $newList + $suffix)
                $newContent | Set-Content $tomlPath
            } else {
                Write-Host "$funcName is already ignored but still causing errors. Breaking." -ForegroundColor Red
                $output
                break
            }
        } else {
            Write-Host "Could not find 'ignored' list in TOML. Check format." -ForegroundColor Red
            break
        }
    } 
    # Check for "Unhandled branch" or "jal target" which often doesn't have the "Error recompiling" line immediately after in the same format
    elseif ($outputStr -match "Unhandled branch in (func_[0-9A-F]+)") {
        $funcName = $Matches[1]
        Write-Host "Caught branch error in $funcName. Adding to ignore list..." -ForegroundColor Yellow
        $content = Get-Content $tomlPath -Raw
        $newList = "`r`n    `"$funcName`","
        $newContent = $content -replace '(?s)(ignored\s*=\s*\[)', "`$1$newList"
        $newContent | Set-Content $tomlPath
    }
    elseif ($outputStr -match "Unhandled cop0 register in mfc0.*in (func_[0-9A-F]+)") {
         $funcName = $Matches[1]
        Write-Host "Caught COP0 error in $funcName. Adding to ignore list..." -ForegroundColor Yellow
        $content = Get-Content $tomlPath -Raw
        $newList = "`r`n    `"$funcName`","
        $newContent = $content -replace '(?s)(ignored\s*=\s*\[)', "`$1$newList"
        $newContent | Set-Content $tomlPath
    }
    else {
        if ($outputStr -match "Error") {
            Write-Host "Hit an unhandled error type." -ForegroundColor Red
            $output
            break
        }
        Write-Host "Recompilation complete or no more recognizable errors." -ForegroundColor Green
        $output
        break
    }
}
