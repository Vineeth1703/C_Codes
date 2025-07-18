@echo off
setlocal

:: Prompt for file name
set /p filename=Enter C file name (without .c): 

:: Compile using gcc
gcc %filename%.c -o %filename%.exe

:: Check if compilation succeeded
if exist %filename%.exe (
    echo Running %filename%.exe ...
    %filename%.exe
) else (
    echo Compilation failed.
)

pause
