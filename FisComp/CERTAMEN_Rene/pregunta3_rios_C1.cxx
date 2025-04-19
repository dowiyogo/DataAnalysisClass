int pregunta3_rios_C1(){

char cabecera [36];
double datos;
TNtuple *Arbol = new TNtuple("Arbol","Cinematica","Q2:Nu:Pt2:P");

ifstream archivo ("data.txt");

archivo.get(cabecera,36);

cout<<cabecera;
while(archivo.good())
{
cout<<datos;
}
archivo.close();

return 0;
}


