#include <iostream>
#include <string>

class Alumno {
public:
int edad;
std::string nombre;
Alumno *next;

Alumno() {
edad=0;
nombre="sinnombre";
next=NULL; }

Alumno(int edad, std::string nombre) {
this->edad=edad;
this->nombre=nombre;
next=NULL; }

Alumno(int edad, std::string nombre, Alumno *next) {
this->edad=edad;
this->nombre=nombre;
this->next=next; }

~Alumno() {
}

void ver(){
std::cout<<"soy tonto y feo y me llamo "<<nombre<<" y tengo "<<edad<<" anios"<<std::endl;
}

};

class Slist {
private:
int size;
Alumno *head;

public:
Slist(){
size=0;
head=NULL;
}

void insertar(int edad,std::string nombre){
Alumno *aux=head;
head = new Alumno(edad,nombre);
size++;
head->next=aux;
}

void ver(){
Alumno *aux=head;
while (aux!=NULL){
std::cout<<"yo soy "<<aux->nombre<<" y tengo "<<aux->edad<<" anios"<<std::endl;
aux=aux->next;}
std::cout<<"nada mas que mostrar \n";
}

void largo(){
std::cout<<"el largo es "<<size<<std::endl;
}

int buscar(std::string nombre){
Alumno *aux=head;
while (aux!=NULL){
if (aux->nombre==nombre)
{std::cout<<"elemento encontrado!!! que tiene "<<aux->edad<<" anios"<<std::endl;
return 0;
}
aux=aux->next;}
std::cout<<"no busques weas"<<std::endl; return 1;
}

int eliminar(std::string nombre){ 
	Alumno *aux=head;
	Alumno *aux2;
		if (size==1 && aux->nombre==nombre)
			{std::cout<<"eliminado \n";head=NULL; size=0; return 0;}
		if (size==1)
			{std::cout<<"no hay nada eres una basura \n"; return 0;}
	while (aux!=NULL){
		if (aux->nombre==nombre)
			{
			aux2->next=aux->next;
			delete aux;
			size--;
			std::cout<<"elemento borrado \n";
			return 0;
			}
		aux2=aux;
		aux=aux->next;
		}
	std::cout<<"no encontro nada \n";
	return 1;
}

};

int main(){
/*Alumno *Pancho=new Alumno(28,"Pancho");
Alumno *Giuliano=new Alumno(60, "Giuliano",Pancho);
Pancho->ver();
Giuliano->ver();
Giuliano->next->ver();
delete Giuliano;
Pancho->ver();*/
Slist *lista=new Slist();
lista->insertar(68,"TripleR");
lista->insertar(90,"CSilva");
lista->insertar(4848,"Polo");
lista->insertar(1,"Slusa");
lista->insertar(900,"SalgadoGAY");
lista->largo();
/*lista->buscar("pancho");
lista->buscar("Polo");
lista->ver();
lista->eliminar("Slusa");
lista->ver();
lista->eliminar("pancho");
Slist *lista2=new Slist();
lista2->insertar(1,"Slusa");
lista2->eliminar("pancho");
lista2->ver();
lista2->eliminar("Slusa");
lista2->ver();*/
/*Alumno *aux=lista->head;
Alumno *aux2=lista->head->next;
while (aux2!=NULL){
aux=aux2;
aux2=aux2->next;}
aux->next=lista->head;
lista->ver();*/
return 0;
}

