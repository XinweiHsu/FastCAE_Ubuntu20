call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat" x64 10.0.17763.0

SET "PATH=C:\Qt\Qt5.14.2\5.14.2\msvc2017_64\bin\;C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64;%PATH%"  
 
cd Plugin2DMeshTools 
qmake CONFIG+=X64 -tp vc 2DMeshTools.pro 

cd ..\PluginComplex 
qmake CONFIG+=X64 -tp vc ComplexPlugin.pro 

cd ..\PluginCustomizer 
qmake CONFIG+=X64 -tp vc pluginCustomizer.pro 

cd ..\PluginHull 
qmake CONFIG+=X64 -tp vc HullCutPlugin.pro 

cd ..\PluginMachinery 
qmake CONFIG+=X64 -tp vc MachineryPlugin.pro 

cd ..\PluginMeshDataExchange 
qmake CONFIG+=X64 -tp vc meshDataExchangePlugin.pro 

cd ..\PluginModel 
qmake CONFIG+=X64 -tp vc pluginModel.pro 

cd ..\PluginPHengLEI 
qmake CONFIG+=X64 -tp vc pluginPHengLEI.pro 

cd ..\PluginThermalFluid 
qmake CONFIG+=X64 -tp vc ThermalFluid.pro 

cd ..\PluginGeant4 
qmake CONFIG+=X64 -tp vc Geant4Plugin.pro 


pause