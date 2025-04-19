#ifndef ROOT_Fila
#define ROOT_Fila

#include <cstdlib>
#include <string>
#include <iostream>
#include "TObject.h"
#include "TClonesArray.h"

using namespace std; 

class Alumno: public TObject {

public: 
	int 	edad;
	int  	rut;
	    
public: 
	Alumno();
	Alumno(int  edad,int  rut);
       ~Alumno();

public:
	void ver(); 

   ClassDef(Alumno,2);  //A Alumno segment
};

class Contador {

public: 
	int  fecha;

public:
	Contador();
	~Contador();
public:
	int  setFila(int  fecha);

  ClassDef(Contador,1);  //Fila Header
};


class Fila : public TObject {
public:
	Contador   *t; 
	TClonesArray *pAlumno;
	   
public: 
	Fila();
	~Fila();

public:
	int  buildFila();
	ClassDef(Fila,1);  //Fila structure
};


#endif
