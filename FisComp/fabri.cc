// reading a text file
{
  gROOT->Reset();
#include <fstream>
#include <string>

TFile *file_final = new TFile("min_datos_C1_Photon.root","RECREATE");
 TNtuple *datos= new TNtuple("datos", "datos voltaje vs tiempo", "amplitud:tiempo");

  double amplitud,tiempo;
  double amplitud_min,tiempo_min;
  char nombre[200];
  char aux[200];
  //system("find /home/rene/shashlick/ -name 'Z2 shashlick07590.txt'>lista_prueba.txt");
  system("find /home/rene/data_osc/shashlick/ -name 'C1*.txt'>lista_prueba.txt");
  ifstream lisfile ("lista_prueba.txt");
  if (lisfile.is_open())
    while(! lisfile.eof())
    {
      lisfile.getline(nombre,200);
      //cout<<nombre<<endl;
      ifstream myfile ((const char *)nombre);
      if (myfile.is_open())
      {
	//cout<<nombre<<endl;
        //for(int i=0; i<5; i++) {getline(myfile,aux);cout<<aux<<endl;}
        for(int i=0; i<5; i++) {myfile.getline(aux,200);}		
        myfile>>tiempo_min>>amplitud_min;
        while (! myfile.eof() )
        {
          myfile>>tiempo>>amplitud;
	  if(amplitud<amplitud_min) {amplitud_min = amplitud; tiempo_min = tiempo;}
          //cout<<tiempo<<amplitud<<endl;
        }
          datos->Fill(amplitud_min,tiempo_min);
      }
     
    }
  else cout<<"Unable to open file"<<endl;
   
   
file_final->Write();

  myfile.close();
  lisfile.close();
  file_final->Close(); 
  delete file_final;
  return 0;
}
