#mkdir
mkdir -p ../output/bin
mkdir -p ../output/bin/gmsh

#python
cp -a ../output/python37/lib/libpython3.7m.so.1.0  ../output/bin/

#cgns
cp -a ../cgns/cgns_linux/libcgns.so        ../output/bin/        
#cp -a ../cgns/cgns_linux/libcgns.a        ../output/bin/

#quazip
cp -a ../quazip/lib/libquazip.so   ../output/bin/

#gmsh
cp -a ./Gmsh/gmsh454/gmsh         ../output/bin/gmsh/
cp -a ./Gmsh/gmsh454/gmsh.Geo         ../output/bin/gmsh/
chmod +x ../output/bin/gmsh/gmsh

#QT
cp -a /opt/Qt5.14.2/5.14.2/gcc_64/lib/*    ../output/bin/


cp -a  -R /opt/Qt5.14.2/5.14.2/gcc_64/plugins/platforms        ../output/bin/

#OCC
cp -a ../OCC/lib/*     ../output/bin/



#VTK
cp -a ../VTK/lib/*                      ../output/bin/

