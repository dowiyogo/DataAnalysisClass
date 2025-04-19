#include <iostream>
using namespace std;

double suma_ref(double &a, double &b){
return a*a+b*b;
}
double suma_sim(double a, double b){
return a*a+b*b;
}

int main(){
double a=5;
double b=12;
double c=suma_ref(a,b);
double d=suma_sim(5,12);
cout << "Tsnundt Shnorhavor \n";
cout << "esto es usando referencia \n";
cout << c << endl;
cout << "esto es usando cosa simple \n";
cout << d << endl;
return 0;
}
