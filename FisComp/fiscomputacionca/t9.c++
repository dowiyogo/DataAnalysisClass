# include <string>
 #include <iostream>
using namespace std;


class Alumno{
  public: 
    int		edad;
    string	*nombre;
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

class ListNode{
  public:
    int elemento;
    ListNode *next;
    
    ListNode(){
    elemento=0;
    next=NULL;  
    }
  
  
    ListNode(int elemento){
     //ListNode(elemento, NULL);  no funciono
     this-> elemento=elemento;
     this->next=NULL;
    }
    ListNode(int elemento, ListNode *next){
     this-> elemento=elemento;
     this->next=next;
    }
    
    
     void insert_after(int item){
       next=new ListNode(item,next);
        
     }
     
     ListNode *nth(int position){
      if(position==1){
      return this;
      } else if ((position <1)||(next ==NULL))
      {
	return NULL;
      }
       else {
	 return next->nth(position -1);
      }
     }
  
   void presentarse()
    {
    cout<<elemento<<endl;
    }
  
};

class SlistNode{
  public:
    Alumno *A;
    SlistNode *next;
    SlistNode (string nombre, int edad,SlistNode *next){
    A=new Alumno(edad,nombre );
    this->next=next;
    }
~SlistNode(){
delete A;
}
   void presentarse()
    {
    A->presentarse();
    }
};


class Slist{
  public:
   SlistNode *head;
   int size; 
   Slist()
   {
     head=NULL;
     size=0;
   }
   void insert_front(string item, int edad){
    head=new SlistNode(item ,edad,head);
    size++;
   }
 

    int LargoLista()
{     
  SlistNode *head1=head;
  int numeroelementos = 0;
   while (head1 != NULL) {
   numeroelementos ++;
   head1 = head1 ->next; //recorre la lista
}
     return (numeroelementos);
}

    void imprimir_lista()
{     SlistNode *head1=head;
  
      while (head1 != NULL) {
	     head1->presentarse();
             head1 = head1 ->next; //recorre la lista
     
      }
     
}

 SlistNode* Buscar_valor(int valor)
{
  SlistNode *p=head;
     while (p != NULL) {
       if (p->A->edad== valor) return (p); //lo encontró
       else p = p ->next; //recorre la lista. O(n)
     }
    return (p); //retorna NULL si no lo encontró.
}


    
 
};

int main() {
ListNode *l1=new ListNode(12);
ListNode *l2=new ListNode();
l2->presentarse();
l1->presentarse();

ListNode *l4=new ListNode(142);
l4->presentarse();


Slist *lista=new Slist();
lista->insert_front("francisco",24 );
lista->head->presentarse();
lista->insert_front("rene",25 );
lista->insert_front("javi",25 );
lista->head->presentarse();
cout<<lista->LargoLista()<<endl;
cout<<lista->size<<endl;
lista->imprimir_lista();
lista->Buscar_valor(24)->presentarse();
return 0 ;
}
