@echo off
set MSBUILD=C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\amd64\MSBuild.exe
"%MSBUILD%" C:\Users\SeanS\Downloads\Aero64Reborn\build_native\Aero64Recompiled.sln /p:Configuration=Release /t:PatchesLib;Aero64Recompiled /m /nologo /v:m
