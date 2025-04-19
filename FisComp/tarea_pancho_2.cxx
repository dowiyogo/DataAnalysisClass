# include <string>
 #include <iostream>

using namespace std;  // esta linea busca en nameespace cout y string

class Alumno{
  public: 
    int        edad;
    string    nombre;
    static int numerodealumnos;
    
    Alumno(int edad,string nombre){
      this -> edad=edad;
      this ->nombre=nombre;
      numerodealumnos =numerodealumnos+1;
    }
    void presentarse()
    {
    cout<<nombre<<"\t"<<edad<<endl;
    }
    ~Alumno(){}
    
    void copiar (Alumno & original){
    edad=original.edad;
    nombre=original.nombre;
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
return 0;
}

