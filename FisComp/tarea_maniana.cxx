#include <iostream>
#include <string>

class Alumno{
public:
	int edad;
	std::string *nombre;
	static int numero_de_alumnos;
	Alumno(int edad,std::string nombre){
		this->edad=edad;
		this->nombre=new std::string(nombre);
		numero_de_alumnos++;
	}
	void presentarse(){
	std::cout << "Tsnundt Shnorhavor \n";
	std::cout<<"yo soy "<<*nombre<<\
	" y tengo "<<edad<<" anios"<<\
	std::endl;
	}
	void cambiar_edad(int edad){
		this->edad=edad;
	}
	void cambiar_nombre(std::string nombre){
		delete this->nombre;
		this->nombre=new std::string(nombre);
	}
	void copiar(Alumno & original){
	 	edad=original.edad;
		delete nombre;
		nombre=new std::string(*original.nombre);
	}
	~Alumno(){
	delete nombre;
	std::cout<<"se borro la custion"<<std::endl;	
	numero_de_alumnos--;
	std::cout<<numero_de_alumnos<<std::endl;
	}
	static void imprimir_alumnos(){
	std::cout<<"numero de alumnos "<<numero_de_alumnos<<std::endl;
	}
};

int Alumno::numero_de_alumnos = 123819842;

int main(){
Alumno *merlot=new Alumno(24,"merlottonto");
merlot->presentarse();
Alumno *javiera=new Alumno(100,"javiloca");
javiera->presentarse();
javiera->cambiar_nombre("super_samurai");
javiera->presentarse();
javiera->copiar(*merlot);
javiera->presentarse();
merlot->imprimir_alumnos();
std::cout<<"borrando a javiera \n";
delete javiera;
std::cout<<"borrando a merlot \n";
delete merlot;
std::cout<<Alumno::numero_de_alumnos<<std::endl;
return 0;
}

