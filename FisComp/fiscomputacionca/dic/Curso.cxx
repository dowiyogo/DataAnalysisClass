#include "TRandom.h"
#include "Curso.h"

ClassImp(Curso);
ClassImp(Horario);
ClassImp(Alumno);

TClonesArray *Curso::fgAlumnos = 0;
        
Curso::Curso(){      
    fNAlumnos=0;
    fNCursos=0;
    ffecha.FijarBloque(fNCursos++);
    if (!fgAlumnos) fgAlumnos = new TClonesArray("Alumno", 1000);  //Se crea el arreglo de objetos del mismo tipo, ente caso será de objetos de la clase Alumno.
    fAlumnos = fgAlumnos;
};
    
void Curso::FormarCurso(Int_t NAlumnos, Int_t RolInicial, Int_t NotaMedia){
  //Se construye un curso
  for (Int_t t = 0; t < NAlumnos; t++){
    Int_t Rol=RolInicial+100;
    Int_t Nota=(UInt_t(gRandom->Rndm(1)+NotaMedia));
    AddAlumno(Rol,Nota); // Se crean los Alumnos
  };
};

Alumno* Curso::AddAlumno(Int_t Rol, Int_t Nota){

    TClonesArray &alumnos = *fAlumnos; //Se pasa la ubicación del puntero que apunta al arreglo de objetos del mismo tipo.
    Alumno *alumno = new(alumnos[fNAlumnos++]) Alumno(Rol,Nota); //Crea el Alumno y lo ubica en la posición de arreglo correspondiente.
    return alumno;
};
