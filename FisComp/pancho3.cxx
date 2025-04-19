#include <iostream>
#include <string>

class Alumno {
public:
int edad;
std::string nombre;
Alumno *next;
Alumno *prev;

Alumno() {
edad=0;
nombre="sinnombre";
next=NULL; 
prev=NULL;
}

Alumno(int edad, std::string nombre) {
this->edad=edad;
this->nombre=nombre;
next=NULL;
prev=NULL; }

Alumno(int edad, std::string nombre, Alumno *next, Alumno *prev) {
this->edad=edad;
this->nombre=nombre;
this->next=next; 
this->prev=prev;
}

~Alumno() {
}

void ver(){
std::cout<<"soy tonto y feo y me llamo "<<nombre<<" y tengo "<<edad<<" anios"<<std::endl;
}

};

class Dlist {
private:
int size;
Alumno *head, *tail;

public:
Dlist(){
size=0;
head=new Alumno();
tail=head;
}

void insertar(int edad,std::string nombre){
Alumno *aux = new Alumno(edad,nombre);
size++;
aux->next=head;
aux->prev=tail;
tail->next=aux;
head->prev=aux;
tail=aux;
}

void ver(){
Alumno *aux=head->next;
while (aux!=head){
std::cout<<"yo soy "<<aux->nombre<<" y tengo "<<aux->edad<<" anios"<<std::endl;
aux=aux->next;}
if (size==0)
	{std::cout<<"lista vacia \n";}
}

void largo(){
std::cout<<"el largo es "<<size<<std::endl;
}

int eliminar(std::string nombre){
Alumno *aux=head->next;
	while (aux!=head){
		if (aux->nombre==nombre)
			{aux->prev->next=aux->next;
			aux->next->prev=aux->prev;
			delete aux;
			std::cout<<nombre<<" borrado \n";
			size--;
			return 0;
			}
		aux=aux->next;}
	std::cout<<"no lo encontre \n";
	return 0;
}

/*int buscar(std::string nombre){
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
*/
};

int main(){
/*Alumno *Pancho=new Alumno(28,"Pancho");
Alumno *Giuliano=new Alumno(60, "Giuliano",Pancho);
Pancho->ver();
Giuliano->ver();
Giuliano->next->ver();
delete Giuliano;
Pancho->ver();*/
Dlist *lista=new Dlist();
lista->insertar(68,"TripleR");
lista->insertar(90,"CSilva");
lista->insertar(4848,"Polo");
lista->insertar(1,"Slusa");
lista->insertar(900,"SalgadoGAY");
lista->eliminar("SalgadoGAY");
lista->eliminar("Slusa");
lista->eliminar("CSilva");
lista->eliminar("Polo");
lista->eliminar("TripleR");
lista->ver();
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

