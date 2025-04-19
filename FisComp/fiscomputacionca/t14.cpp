
#include <iostream>
#include <fstream>
using namespace std;


int main() {
  double i=0; 
  
  double amplitud, tiempo,amplitudmin, tiempomin;
  char cadena[128];
   // Crea un fichero de salida
  /*ofstream fs("nombre.txt"); 

   
   for(i=0;i<=1;i=i+0.1)
   {
   fs << 1.3*i<<"\t"<<i << endl;
   }
   
   
   fs.close();*/
 
   amplitudmin=0;
   tiempomin=0;
   // Abre un fichero de entrada
   ifstream fe("nombre.txt"); 

    while(!fe.eof()) {
      fe >>amplitud>>tiempo;
      cout<<amplitud<<"\t"<<tiempo<<endl;
    if(amplitud==0.65){
     amplitudmin=amplitud;
     tiempomin=tiempo;
    }
     
   }
  cout<<amplitudmin<<"\t"<<tiempomin<<endl;



fe.close();

   return 0;
}
