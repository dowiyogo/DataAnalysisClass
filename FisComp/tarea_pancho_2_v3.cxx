#include <string>
 #include <iostream>

using namespace std;  // esta linea busca en nameespace cout y string

class Alumno{
  public: 
    int        edad;
    string    *nombre;
    static int numerodealumnos;
    
    Alumno(){
       this -> edad=0;
      this ->nombre=new string("uname");
      numerodealumnos =numerodealumnos+1;
    }
    
    Alumno(int edad,string nombre){
      this -> edad=edad;
      this ->nombre=new string(nombre);
      numerodealumnos =numerodealumnos+1;
    }
    void presentarse()
    {
    cout<<*nombre<<"\t"<<edad<<endl;
    }
   ~Alumno(){
    delete nombre;
    cout <<"objeto borrado"<<endl;
    }
    
    void copiar (Alumno & original){
    edad=original.edad;
    delete nombre;
    nombre=new string(*original.nombre);
    }
    
    void cambiar_nombre(string nnombre){
    delete nombre;
    nombre=new string(nnombre);
    }
    
    static void imprimir_alumnos(){
    cout<<"numero de alumnos\t"<<numerodealumnos<<endl;
    }
};

int Alumno::numerodealumnos = 0;

int main(){
  Alumno *t1=new Alumno(25,"francisco");
  t1->presentarse();
  
  Alumno *t2=new Alumno(24,"rene");
  t2->presentarse();
  t2->imprimir_alumnos();
  
  Alumno *t3=new Alumno();
  t3->presentarse();
  t3->imprimir_alumnos();
  t3->copiar(*t2);
  t3->presentarse();
  t3->imprimir_alumnos();
  t3->cambiar_nombre("pedro");
  t3->presentarse();
  
  delete t1;
  delete t2;
  delete t3;
  
return 0;
}

