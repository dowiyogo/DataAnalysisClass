#include "Alumno.h"

//ClassImp(Alumno)

Alumno::Alumno(){
      this -> edad=0;
      this ->nombre=new string("uname");
      }
    
Alumno::Alumno(int edad,string nombre){
      this -> edad=edad;
      this ->nombre=new string(nombre);
     }
   
Alumno::~Alumno(){
    delete nombre;
    cout <<"objeto borrado"<<endl;
    } 

void Alumno::ver(){
    cout<<*nombre<<"\t"<<edad<<endl;
    }

