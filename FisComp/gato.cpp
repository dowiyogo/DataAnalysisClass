class Alumno{
public:
	string nombre;
	int edad;

Alumno(int edad,string nombre)
	{this->nombre=nombre;
	this->edad=edad;
 	}

void ver(){
	cout<<"me llamo "<<nombre<<" y tengo "<<edad<<" soy viejo \n";
	}

~Alumno(){}

};
int gato(){
cout<<"soy el pancho y estoy loco \n";
Alumno *pancho=new Alumno(10,"pancho");
pancho->ver();
TF1 *f1=new TF1("func1","sin(x)/x",0,10);
TF1 *f2=new TF1("func2","sin(x^2)*x^2",0,10);
TF1 *f3=new TF1("func3","0.7*sin(x)+0.2*sin(2*x)+0.1*sin(3*x)",0,10);
TF1 *f4=new TF1("func4","exp(-x*2*sin(x*2))",0,10);
/*
TCanvas *MyC = new TCanvas("MyC","Test canvas",1);
MyC->Divide(2,2);
MyC->cd(1);
f1->Draw();
MyC->cd(2);
f2->Draw();
MyC->cd(3);
f3->Draw();
MyC->cd(4);
f4->Draw();
*/

double amplitud, tiempo;
/*
ofstream archivo ("pancho.txt");
for (double i=0;i<=1;i=i+0.1){
archivo<<2*i<<"\t"<<i<<endl;}
archivo.close();
*/
//ifstream archivo2 ("pancho.txt");
//TH1F *histopancho=new TH1F("histopancho","los histogramas",100,0,2);
//TH1F *r=new TH1F("r","gauss de la manera dificil mejor use r",100,-3,3);

/*archivo2>>amplitud>>tiempo;
while(!archivo2.fail())
{cout<<amplitud<<"\t"<<tiempo<<endl;
histopancho->Fill(amplitud);
archivo2>>amplitud>>tiempo;
}
histopancho->Draw();
archivo2.close();*/
/*
r->FillRandom("gaus",10000);
r->Draw();
r->Fit("landau");
*/



return 0;
}

