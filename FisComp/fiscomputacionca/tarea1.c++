 #include <iostream>
using namespace std;
double p(double x,double y)
{
return x*x+y*y;
}

double pr(double& x,double& y)
{
return   (x)*(x)+(y)*(y);
}
 double z=12;
  double a[2]={3,4};
  double *b;
int main()
{
 
 // cout<<*a <<endl;
 // cout<<a <<endl;
 //cout<<&a <<endl;
 // cout<<a[0] <<endl;
 //cout<<*(a+1) <<endl;

  b=a;
  b=&z;
  z=p(3,4);
  cout<< z<<endl;
  z=p(*a,*(a+1));
  cout<< z<<endl;
  
  cout<<b <<endl;
  cout<<*(b) <<endl;
  return 0;
}

