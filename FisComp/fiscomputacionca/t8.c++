# include <string>
 #include <iostream>

using namespace std;  // esta linea busca en nameespace cout y string

int a;

  int factorial(int n) {
   if(n < 0) return 0;				// No negatividad	
   else if(n > 1) return n*factorial(n-1); 	// Recursividad 
   return 1; 					// Condición de terminación, n == 1
}
  


int main(){
cout<<"ingrese numero"<<endl;
cin>>a;
cout<<"El factorial de "<<a <<"\t:"<<factorial(a)<<endl;  
return 0;
}
