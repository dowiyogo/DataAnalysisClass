#include <iostream>

class numero{
public:
int num;
numero *next;
numero(){
	num=0;
	next=NULL;
	}
numero(int num,numero *next)
	{this->num=num;
	this->next=next;}
~numero(){}
};

class Slist{
public:
int size;
numero *head;
Slist(){
size=0;
head=NULL;
}
void agregar(int num){
	numero *aux=new numero;
	aux->num=num;
	aux->next=head;
	head=aux;
	size++;
}

int eliminar(int num){
if (size!=0)	{
		numero *aux=head;
		numero *direcciones [size]; /*se que hay una forma de usar otro auxiliar y no un arreglo, pero no me acuerdo ni se me ocurrio*/
		for (int i=0;i<=size-1;i++)
		{
			direcciones[i]=aux;
			if (aux->num==num){
				direcciones[i-1]->next=aux->next;
				delete aux;
				std::cout<<num<<" eliminado \n";
				size--;
				return 0;
			}
			aux=aux->next;
		}
		std::cout<<"no existe el elemento \n";
		}
else {std::cout<<"lista vacia \n";}	
return 1;
}

void invertir(){
if (size!=0)	{
		numero *aux=head;
		numero *direcciones [size];	/*debe haber una forma mas elegante pero soy malo pensando en detalle tan rapidamente*/
		for (int i=0;i<=size-1;i++)
		{
			direcciones[i]=aux;
			aux=aux->next;
		}
		head=direcciones[size-1];
		aux=head;
		for (int i=size-2;i>=0;i--)
		{
			aux->next=direcciones[i];
			aux=aux->next;
		}
		std::cout<<"se ha invertido el orden \n";
		}
else {std::cout<<"lista vacia \n";}	
}

void ver(){
numero *aux=head;
if (size!=0)	{
		std::cout<<"hay "<<size<<" numeros en la lista, que son:\n";
		for (int i=1;i<=size;i++)
		{
			std::cout<<aux->num<<std::endl;
			aux=aux->next;
		}
		}
else {std::cout<<"lista vacia \n";}	
}

~Slist(){};
};


int main(){
Slist *lista=new Slist;
lista->agregar(1);
lista->agregar(2);
lista->agregar(3);
lista->eliminar(0);
lista->eliminar(2);
lista->ver();
lista->invertir();
lista->ver();
return 0;
}
