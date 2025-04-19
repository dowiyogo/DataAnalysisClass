#ifndef Curso_H
#define Curso_H

#include <cstdlib>
#include <iostream>
#include "TObject.h"
#include "TClonesArray.h"

class Alumno : public TObject{
public:
    
    Int_t Rol;
    Int_t Nota;
    
    Alumno(){};
    Alumno(Int_t Rol, Int_t Nota):Rol(Rol), Nota(Nota){};
    ~Alumno(){};
    
    ClassDef(Alumno,2); //Clase análoga a Track
};

class Horario{
public:
    
    Int_t fBloque;
   
    Horario(){fBloque=0;};
    ~Horario(){};
    void FijarBloque(Int_t i){fBloque = i;};
    
    ClassDef(Horario,1); //Clase análoga a EventHeader
};

class Curso : public TObject{
public:

    Int_t           fNAlumnos;
    Int_t           fNCursos;
    Horario         ffecha;
    TClonesArray    *fAlumnos;
    
    Curso();
    ~Curso(){};
    void FormarCurso(Int_t NAlumnos, Int_t RolInicial, Int_t NotaMedia);
    Alumno *AddAlumno(Int_t Rol, Int_t Nota);
    
    static TClonesArray *fgAlumnos;
    
    ClassDef(Curso,1); //Clase análoga a Event;
};

#endif


