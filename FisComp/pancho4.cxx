#include <iostream>
#include <string>

class Alumno {
public:
int edad;
std::string nombre;
Alumno *next,*prev;

Alumno() {
edad=0;
nombre="sinnombre";
next=NULL; 
prev=NULL;}

Alumno(int edad, std::string nombre) {
this->edad=edad;
this->nombre=nombre;
next=NULL;
prev=NULL; }

Alumno(int edad, std::string nombre, Alumno *next, Alumno *prev) {
this->edad=edad;
this->nombre=nombre;
this->next=next;
this->prev=prev; }

~Alumno() {
}

void ver(){
std::cout<<"soy tonto y feo y me llamo "<<nombre<<" y tengo "<<edad<<" anios"<<std::endl;
}

};

class D2list {
private:
int size;
Alumno *head;
Alumno *tail;

public:
D2list(){
size=0;
head=NULL;
tail=head;
}

void insertar(int edad,std::string nombre){
switch (size)
{
case 0: {head=new Alumno(edad,nombre);
	tail=head;	
	size++;}
    	break;
case 1: {tail=new Alumno(edad,nombre);
	head->next=tail;
	tail->prev=head;
	head->prev=tail;
	tail->next=head;		
	size++;	
	}
    	break;
default: {Alumno *aux=new Alumno(edad,nombre);
	tail->next=aux;
	aux->prev=tail;
	aux->next=head;
	head->prev=aux;
	tail=aux;
	size++;
	};
    break;
}
}

void ver(){
switch (size)
{
case 0: {std::cout<<"lista vacia \n";}
    	break;
case 1: {std::cout<<"yo soy "<<head->nombre<<" y tengo "<<head->edad<<" anios"<<std::endl;}
    	break;
default: {Alumno *aux=head;
		for (int i=1;i<=size;i++)
		{
		std::cout<<"yo soy "<<aux->nombre<<" y tengo "<<aux->edad<<" anios"<<std::endl;
		aux=aux->next;
		}
	};
    break;
}
}

void largo(){
std::cout<<"el largo es "<<size<<std::endl;
}

/*
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
*/

int eliminar(std::string nombre){
switch (size)
{
case 0: {std::cout<<"lista vacia \n";}
    	break;
case 1: {if (nombre==head->nombre){
			delete head;
			head=NULL;
			tail=NULL;
			size--;
			std::cout<<nombre<<" eliminado \n";}
	else {std::cout<<"no se encuentra "<<nombre<<" en la lista \n";}
	}
    	break;
default: {Alumno *aux=head;
		for (int i=1;i<=size;i++)
		{
		if (nombre==aux->nombre){
			aux->prev->next=aux->next;
			aux->next->prev=aux->prev;
			delete aux;
			size--;
			std::cout<<nombre<<" eliminado \n";
			return 0;}
		aux=aux->next;
		}
		std::cout<<"no se encuentra "<<nombre<<" en la lista \n";
	};
    break;
}
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
D2list *lista=new D2list();
lista->insertar(68,"TripleR");
lista->insertar(90,"CSilva");
lista->insertar(4848,"Polo");
lista->insertar(1,"Slusa");
lista->insertar(900,"SalgadoGAY");
lista->largo();
lista->ver();
lista->eliminar("pancho");
lista->eliminar("Slusa");
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

