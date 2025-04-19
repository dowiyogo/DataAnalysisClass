
#ifndef Alumno_h
#define Alumno_h


# include <string>
 #include <iostream>

using namespace std;  // esta linea busca en nameespace cout y string

class Alumno{

public: 
	int	edad;
	string	*nombre;
	    
public: 
	Alumno();
	Alumno(int edad,string nombre);
       ~Alumno();

public:
	void ver(); 

//ClassDef (Alumno,1)

};

#endif


