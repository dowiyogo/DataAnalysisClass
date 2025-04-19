{
  cout<<"abuela"<<endl;
  TF1 f1("funcion","sin(x)",0,2*3.14);
  TF1 f2("funcion","0.7*sin(x)+0.2*sin(2*x)+0.05*sin(3*x)+0.05*sin(4*x)",0,4*3.14);
  f1.Integral(0,2*3.14);
  TH1F *h1 =new TH1F("h1","h",100,-3,3);
  h1.FillRandom("gaus",1000);
 
  
 TH1F *h3=h1;
 
  TCanvas *k=new TCanvas("k","test",1);
  k->Divide(2,2);
  
  k->cd(1);
  h1->Draw();
 
  k->cd(2);
  f1.Draw();
  
 
  k->cd(3);
 f2.Draw();
    k->cd(4);
  
 h3.Draw();

}