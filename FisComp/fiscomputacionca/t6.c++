#include <iostream>
# include <string>
#include <cstdlib> // needed for std::system
using namespace std;  // esta linea busca en nameespace cout y string
int num;
string res;

void primo(int num){
  unsigned int n, p, num_columnas;  
  num_columnas = 0 ;    
    n = 2;
    while(n <= num)
    {
        for (p = 2; n % p!= 0; p++);
        if (p == n) 
        { 
            cout << n <<", ";
            if(++num_columnas % 10 == 0)
                cout << "\n" << endl;
        }
        n++;
    }
    cout << "\n" << endl;
}

void presentacion(){
    system("clear");
    cout<<"-----------------------------------------------"<<endl;
    cout<<"-            Programa Numeros Primos          -"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"\n"<<endl; 
    
     
    
}

void salida(){
	cout<<"                       _\\|/_                     "<<endl; 
        cout<<"                       (o o)                     "<<endl; 
        cout<<"  +-----------------oOO-(_)-OOo--------------+   "<<endl;
        cout<<"  |                Francisco Barrios         |   "<<endl;
        cout<<"  |              Errazurriz 2720             |   "<<endl;
        cout<<"  |              Valparaíso- CHILE           |   "<<endl;
        cout<<"  |                                          |   "<<endl;
        cout<<"  |     Tel: (32) 2235435                    |   "<<endl;
        cout<<"  |  E-mail: francisco.barriosr@gmail.com    |   "<<endl;
        cout<<"  +------------------------------------------+   "<<endl;
        cout<<"                      (_| |_)                    "<<endl;


}


int main(){
  res="si";
  while(res=="si"){
    presentacion() ;
    cout<<"Ingrese el numero n: "<<endl;
    cin >> num;
    cout<<"Los numeros primos anteriores son:"<<endl;
    primo(num);
    cout<<"Desea ingresar otro numero \"si\" o \"no\""<<endl;
   
    cin>>res;
    while(res!="si" && res!="no")
    {
       cout<<"\"si\"o \"no \"" <<endl;
       cin>>res;
    }
    if (res=="no"){
      cout<<"Adios..............."<<endl;
      system("clear");
    } 
        
   
   
  }
    cout<<"Adios..............."<<endl;
    salida();

   
    return 0;
}
//cin.good

//int *a;   a=new int [5]
