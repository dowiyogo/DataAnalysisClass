Mydict.cxx: $(HEADERS) Alumno.cpp Alumno.h AlumnoLinkDef.h 
	rootcint -f $@ -c $(CXXFLAGS) -p $^
 
libMyLib.so: Mydict.cxx $(SOURCES)
	g++ -shared -o$@ `root-config --ldflags` $(CXXFLAGS) -I$(ROOTSYS)/include $^
clean:
	rm Mydict.* libMyLib.so
