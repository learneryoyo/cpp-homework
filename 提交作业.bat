@echo off
setlocal
cd /d "%~dp0"

rem Optional first argument = commit message.
rem Usage: submit.bat "first lab 8 problems"
set "MSG=%~1"
if not defined MSG set "MSG=homework: %date% %time%"

echo ==========================================
echo   C++ Homework - One Click Submit
echo ==========================================
echo.

git add -A
git diff --cached --quiet
if not errorlevel 1 goto clean

echo [i] Files to submit:
git diff --cached --name-only --diff-filter=ACMR
echo.

git commit -m "%MSG%"
if errorlevel 1 goto fail

echo [i] Pushing to GitHub ...
git push
if not errorlevel 1 goto ok

echo.
echo [!] Push rejected. Syncing with remote first ...
git pull --rebase
if errorlevel 1 goto fail
git push
if errorlevel 1 goto fail

:ok
echo.
echo [OK] Submitted.
echo      https://github.com/learneryoyo/cpp-homework
goto end

:clean
echo [i] Nothing new to submit. Working tree is clean.
echo     (did you save the file before running this?)
goto end

:fail
echo.
echo [X] Failed. Read the message above.
echo     See 提交指南.md section 5 for common errors.

:end
echo.
pause
