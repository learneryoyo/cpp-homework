@echo off
chcp 936 >nul 2>&1
setlocal
cd /d "%~dp0"

echo ==========================================
echo   C++ Homework - One Click Submit
echo ==========================================
echo.

git add -A
git diff --cached --quiet
if errorlevel 1 goto docommit

echo [i] Nothing new to submit. Working tree is clean.
goto end

:docommit
git commit -m "homework: %date% %time%"
if errorlevel 1 goto fail

echo.
echo [i] Pushing to GitHub ...
git push
if errorlevel 1 goto fail

echo.
echo [OK] Submitted successfully.
goto end

:fail
echo.
echo [X] Failed. Read the message above.

:end
echo.
pause
