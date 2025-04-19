#include <iostream>
using namespace std;


class alumno{
  public:
  int n;
  alumno *next;
  
  alumno(){
   n=0;
   next=NULL;
   }
 alumno (int n){
  this->n=n;
  next=NULL;
 }
  
  
  ~alumno(){
  }
  void ver(){
  cout<<n<<endl;
  }
    
};

class SList{
  public:
  int size;
  alumno *head;
  
  SList(){
   size=0;
   head=NULL;
  }
 
 SList(int n){
 size=1; 
   head=new alumno(n);
 }
  
 int ver(){
   alumno *aux=head;
   if (aux==NULL){
     cout<<"lista vacia"<<endl;
     return 0;
   }
  while(aux!=NULL){
   cout<<aux->n<<"\t"; 
   aux=aux->next ; 
  }
  cout<<"\n";
  return 0;
 }
  void insertar(int n){
    alumno *aux;
   if (head==NULL){
     head=new alumno(n);
     size=1;
   }
  else {
  aux=new alumno(n);
   aux->next=head;
   head=aux;
   size ++;
   }
  }
  
  int cambiarorden(){
    alumno *aux=head;
    alumno *head2=NULL;
    alumno *aux2;
  if (aux==NULL){
     cout<<"lista vacia"<<endl;
     return 0;
   }
  while(aux!=NULL){
	if (head2==NULL){
	head2=new alumno(aux->n);
	size=1;
	}
	else {;
	aux2=new alumno(aux->n);
	aux2->next=head2;
	head2=aux2;
	size ++;
	}
   aux=aux->next ; 
    }
  borrarlista();
  head=head2;
  return 0;
 }
  int borrarlista(){
   
   alumno *aux=head;
   if (aux==NULL){
     cout<<"lista vacia"<<endl;
     return 0;
   }
  while(aux!=NULL){
   head= aux->next;
   delete aux;
   aux=head ; 
  }
  return 0;
    
  }
    
  int largo(){
   cout<<size<<endl;; 
  }
  
  
};


int main (){
  
  SList *p=new SList();
  SList *q=new SList(2);

  p->insertar(3);
  p->insertar(4);
  p->insertar(14);
  p->insertar(42);
  p->insertar(43);
  
 p->ver();
 p->largo();
 p->cambiarorden();
 p->ver();
 p->largo(); 
  
 p->borrarlista();
 
 return 0; 
}