@echo off
rem ǿ�ƻ�ȡ����ԱȨ��
%1 mshta vbscript:CreateObject("Shell.Application").ShellExecute("cmd.exe","/c %~s0 ::","","runas",1)(window.close)&&exit
rem //���ñ��� 
set NAME="��̫�� 6"
rem //��������ֵ���Ը�����Ҫ����
set ADDR=192.168.100.43
set MASK=255.255.255.0
set GATEWAY=192.168.100.101
set DNS1=192.168.100.101
set DNS2=
rem //������������ΪIP��ַ���������롢���ء���ѡDNS������DNS


echo ��ǰ���ò����У�
echo 1 ����Ϊ��̬IP
echo 2 ����Ϊ��̬IP
echo 3 �˳�
echo ��ѡ���س���
set /p operate=
if %operate%==1 goto 1
if %operate%==2 goto 2
if %operate%==3 goto 3


:1
echo �������þ�̬IP�����Ե�...
rem //���Ը��������Ҫ���� 
echo IP��ַ = %ADDR%
echo ���� = %MASK%
echo ���� = %GATEWAY%
netsh interface ipv4 set address %NAME% static %ADDR% %MASK% %GATEWAY% 
echo ��ѡDNS = %DNS1% 
if "%DNS1%"=="" (echo DNS1Ϊ��) else netsh interface ipv4 set dns %NAME% static %DNS1%
echo ����DNS = %DNS2% 
if "%DNS2%"=="" (echo DNS2Ϊ��) else (netsh interface ipv4 add dns %NAME% %DNS2%) 
echo **********������Ϊ��̬IP��%ADDR%***********
pause
goto 3


:2
echo �������ö�̬IP�����Ե�...
echo ���ڴ�DHCP�Զ���ȡIP��ַ...
netsh interface ip set address %NAME% dhcp
echo ���ڴ�DHCP�Զ���ȡDNS��ַ...
netsh interface ip set dns %NAME% dhcp 
echo **********������Ϊ��̬IP��ַ***********
pause
goto 3


:3
exit