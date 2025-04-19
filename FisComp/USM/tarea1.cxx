#include <iostream>


double P2(double, double);
double P2R(double&, double&);
double P2P(double*);

int main(){

  double a = 3.0, b = 4.0;

  double p[2] = {5.0, 4.0};
 
  double c = P2(3.0, 4.0);
  double d = P2(a, b);
  double e = P2R(a,b);
  double f = P2P(p);
  
  //Direcciones de memoria
  std::cout << "&a: " << &a << std::endl;
  std::cout << "&b: " << &b << std::endl;
  std::cout << "direccion de p: " << &p << std::endl;
  //valor del resultado
  std::cout << "c: " << c << std::endl;
  std::cout << "d: " << d << std::endl;
  std::cout << "e: " << e << std::endl;
  std::cout << "f: " << f << std::endl;

  return 0;
}

double P2(double a1, double b1){
  std::cout << "&a1: " << &a1 << std::endl;
  std::cout << "&b1: " << &b1 << std::endl;
  return a1*a1+b1*b1;
}

double P2R(double& a1, double& b1){
  std::cout << "&a1: " << &a1 << std::endl;
  std::cout << "&b1: " << &b1 << std::endl;
  return a1*a1+b1*b1;

}

double P2P(double* ptr){
  std::cout << "direccion de ptr: " << &ptr << std::endl;
  std::cout << "&(ptr+1): " << (ptr+1) << std::endl;
  return (*ptr)*(*ptr) + (*(ptr+1))*(*(ptr+1));
}
