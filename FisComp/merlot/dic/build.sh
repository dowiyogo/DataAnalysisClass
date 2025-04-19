rootcint -f Mydict.cxx -c -p Curso.cxx Curso.h CursoLinkDef.h
echo "Mydict.cxx done"
g++ -shared -olibMyLib.so `root-config --ldflags`  -I/home/pancho/root/include Mydict.cxx
echo "libMylib.so done"
echo "en root use gSystem->Load("libMyLib.so")"

