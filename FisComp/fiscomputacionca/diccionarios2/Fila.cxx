#include "Fila.h"

ClassImp(Contador)
ClassImp(Fila)
ClassImp(Alumno)
///////////////////////////////////////////////////////////
Fila::Fila(){
  	t=new Contador();
  	pAlumno=new TClonesArray("Alumno",5);
}

Fila::~Fila(){
    delete t;	
    delete pAlumno;
    } 

int  Fila::buildFila(){
  TClonesArray &t = *pAlumno;

  new(t[0]) Alumno(15,100); 
  new(t[1]) Alumno(14,101);
  new(t[2]) Alumno(16,102);
  new(t[3]) Alumno(14,103);
  new(t[4]) Alumno(18,104);

return 0;
};

 
////////////////////////////////////////////////////////////
Contador::Contador(){
     this-> fecha=89;
}

Contador::~Contador(){
    
} 

int  Contador::setFila(int  fecha){
      this-> fecha=fecha;
      return 0;
}
/////////////////////////////////////////////////////////////
Alumno::Alumno(){
      this -> edad=0;
      this ->rut=0;
      }
    
Alumno::Alumno(int  edad,int  rut){
      this -> edad=edad;
      this -> rut=rut;
     }
   
Alumno::~Alumno(){
      cout <<"objeto borrado"<<endl;
    } 



void Alumno::ver(){
      cout<<rut<<"\t"<<edad<<endl;
    }
/////////////////////////////////////////////////////////////////



