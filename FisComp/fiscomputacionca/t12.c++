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
  private:
    Alumno *head;
    int size; 
    
  public: 
    Slist(){
      head=NULL;
      size=0;
      }
  
    void insert_front(string item,int edad ){
     head=new Alumno(edad, item,head);
     size++;
    }
 
    int Largo_Lista(){  
      Alumno *head1=head;
      int numeroelementos = 0;
      while (head1 != NULL) {
      numeroelementos ++;
      head1 = head1 ->next; //recorre la lista
      }
      return (numeroelementos);
      	
    }

    void Imprimir_Lista(){     
     
    }


    int PopBack(){     
    
    return 0;
    }

    int eliminar(int posicion){
    return 0;
    }
    
    int Buscar_posicion(int valor){
    return 0; //retorna NULL si no lo encontró.
    }

    int Buscar_valor(int valor){
    return 0; //retorna NULL si no lo encontró.
    }
  
    int Buscar_nombre(string nombre){
  
    return 0; //retorna NULL si no lo encontró.
    }  
  
};

int main() {

Slist *lista=new Slist();
lista->insert_front("francisco",24 );
lista->Imprimir_Lista();
cout<<"largo de lista\t"<<lista->Largo_Lista()<<endl;
return 0 ;

}
