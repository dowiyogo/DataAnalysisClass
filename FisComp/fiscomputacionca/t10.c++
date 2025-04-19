# include <string>
 #include <iostream>

using namespace std;  // esta linea busca en nameespace cout y string

class Alumno{
  public: 
    int		edad;
    string	*nombre;
    Alumno      *next;
    
    Alumno(){
      this -> edad=0;
      this ->nombre=new string("uname");
      this->next=next;
    }
    
    Alumno(int edad,string nombre,Alumno * next){
      this -> edad=edad;
      this ->nombre=new string(nombre);
      this->next=next;
    }
   
   ~Alumno(){
    delete nombre;
    cout <<"objeto borrado"<<endl;
    } 
};



class Slist{
  public:
   Alumno *head;
   int size; 
   Slist()
   {
     head=NULL;
     size=0;
   }
   void insert_front(string item,int edad ){
    head=new Alumno(edad, item,head);
 
    
    size++;
   }
 
    int Largo_Lista()
{     
  Alumno *head1=head;
  int numeroelementos = 0;
   while (head1 != NULL) {
   numeroelementos ++;
   head1 = head1 ->next; //recorre la lista
}
     return (numeroelementos);
}

    void Imprimir_Lista()
{     Alumno *head1=head;
      while (head1 != NULL) {
	     cout<<*(head1->nombre)<<"\t"<<head1->edad<<endl;
	     head1 = head1 ->next; //recorre la lista
     
      }
     
}

//int Add(Alumno* elemento, int position);// agrega un elemento en la posición position
//int PushBack();//Agrega un elemento al final de la lista

//Aumno* Retrieve(int position); // retorna un puntero al Alumno en la posición position de la lista
//Alumno* PopBack();// retorna un puntero al Alumno en la ultima posición position de la lista
//bool Delete(int position); // borra al un elemento en la posición igual a position
//bool Find(int position);//buscar elemento por su posición retorna 1 si lo encuentra 0 sino
//bool Find(Alumno* elemento);//buscar elemento por "elemento" retorna 1 si lo encuentra 0 sino (se busca a si mismo)
//bool Find(std::string nombre);//buscar elemento por su nombre retorna 1 si lo encuentra 0 sino


Alumno* PopBack()// retorna un puntero al Alumno en la ultima posición position de la lista
{     
  Alumno *p=head;
  Alumno *t=p->next;
  while (t != NULL)
  {
    p = t; 
    t=t->next;
  
  }
  return p;
}


int eliminar(int posicion)
{
    Alumno *p=head;
    Alumno *t=p->next;
    int numeroelementos = 0;
     while (t != NULL) {
       if (numeroelementos== posicion-2)
       {
	 
	p->next=t->next; 
	delete t;
       }      
	 else p = t; 
	       t=t->next;
	   numeroelementos++;
	   
	 //recorre la lista. O(n)
     }

return 0;
}



Alumno* Buscar_posicion(int valor)
{
  Alumno *p=head;
    int numeroelementos = 0;
     while (p != NULL) {
       if (numeroelementos== valor) return (p); //lo encontró
      
	 else {p = p ->next; 
	   numeroelementos++;}
	 //recorre la lista. O(n)
     }
    return (p); //retorna NULL si no lo encontró.
}





Alumno* Buscar_valor(int valor)
{
  Alumno *p=head;
     while (p != NULL) {
       if (p->edad== valor) return (p); //lo encontró
       else p = p ->next; //recorre la lista. O(n)
     }
    return (p); //retorna NULL si no lo encontró.
}
  

Alumno* Buscar_nombre(string nombre)
{
  Alumno *p=head;
     while (p != NULL) {
       if (*(p->nombre)== nombre) return (p); //lo encontró
       else p = p ->next; //recorre la lista. O(n)
     }
    return (p); //retorna NULL si no lo encontró.
}  
  
};

int main() {

Slist *lista=new Slist();
lista->insert_front("francisco",24 );
lista->insert_front("rene",23 );
lista->insert_front("javi",25 );
lista->insert_front("horacio",0 );
lista->insert_front("baltazar",0 );
lista->Imprimir_Lista();

cout<<"Buscar por edad 23 : \t"<<*(lista->Buscar_valor(23)->nombre)<<endl;
cout<<"Buscar edad de horacio: \t"<<lista->Buscar_nombre("horacio")->edad<<endl;
cout<<"Buscar al cuarto: \t"<<*(lista->Buscar_posicion(4)->nombre)<<"\t"<<lista->Buscar_posicion(4)->edad<<endl;

cout<<"largo de lista\t"<<lista->Largo_Lista()<<endl;
cout<< "Eliminar el segundo"<<endl;
lista->eliminar(2);
lista->Imprimir_Lista();

//cout<<"largo de lista\t"<<lista->Largo_Lista()<<endl;

cout<<"El ultimo es: \t"<<*(lista->PopBack()->nombre)<<lista->PopBack()->edad<<endl;



return 0 ;

}
