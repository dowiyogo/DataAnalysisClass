#include <iostream>
using namespace std;


int fibonacci(int n)
{
if(n==1)return 0;
if(n==2)return 1;
else
     return (fibonacci(n-1) + fibonacci(n-2));
}




int fibonacci2(int n)
{
  
  if(n==1)return 0;
  if(n==2)return 1;
  n=n-3;
  int x1=0;
  int x2=1;
int x3;
cout<<x1<<"\t";
cout<<x2<<"\t";
  for (int i=0;i<=n;i++){
  x3=x1+x2;
  x1=x2;
  x2=x3;
  cout<<x3<<"\t";
  }
   cout<<"\n";
 return x3; 
}




int main(){
  int numero,n;
  cout<<"Calculo del termino n de la serie Fibonnaci"<<endl;
  cout<<"Ingrese n"<<endl;
  cin>>numero;
  n=numero;
  cout<<"La serie es:"<<endl;
  numero=fibonacci2(numero);
  cout<<"El numero es "<<endl;
  cout<<numero<<endl;
  
 
  cout<<fibonacci(n)<<endl;

 
  return 0;
}