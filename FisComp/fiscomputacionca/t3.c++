# include <string>
 #include <iostream>

using namespace std;  // esta linea busca en nameespace cout y string


int main()
{

string *s2=new string("hola");
s2->append("!!!!!");
cout<< *s2<<endl;
cout<< s2<<endl;

return 0;
}