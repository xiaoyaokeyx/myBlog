@echo off

rem ����һ
rem date /t
rem 2023/12/16 ����
for /f "tokens=1-3 delims=/ " %%a in ("%date%") do (
  set year=%%a
  set month=%%b
  set day=%%c
)
rem echo date:%year%%month%%day%

rem time
rem 20:39:07.71
for /f "tokens=1-4 delims=:." %%a in ("%time%") do (
  set hour=%%a
  set minute=%%b
  set second=%%c
  set millisecond=%%d
)
rem echo time:%hour%%minute%%second%_%millisecond%

set timestamp=%year%%month%%day%_%hour%%minute%%second%
echo timestamp:%timestamp%

rem ������
echo timestamp_simple:%date:~0,4%%date:~5,2%%date:~8,2%_%time:~0,2%%time:~3,2%%time:~6,2%

pause