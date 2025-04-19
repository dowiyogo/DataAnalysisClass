rootcint -f Mydict.cxx -c -p Alumno.cpp Alumno.h AlumnoLinkDef.h
echo "Mydict.cxx done"
g++ -shared -olibMyLib.so `root-config --ldflags`  -I/home/pancho/root/include Mydict.cxx
echo "libMylib.so done"
echo "en root use gSystem->Load("libMyLib.so")"

