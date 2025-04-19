

int tres(){
  Float_t Q2,Nu,Pt2,P;
 
  char str[256]  ;
  ifstream p("data.txt", ifstream::in );	
  p.getline (str,256);
  
  TNtuple *q=new TNtuple("q","Arboleda","Q2:Nu:Pt2:P");
  
  p>>Q2>>Nu>>Pt2>>P;  //evitar leer el ultimo dato dos veces.
  
  TH2F *t=new TH2F("t","2D histograma ",2,0,5,2,0,5 );
  
  while (p.good()){
    if (P>1){
    t->Fill(Q2,Nu); 
    //cout<<Q2<<"\t\t"<<Nu<<"\t\t"<<Pt2<<"\t\t"<<P<<endl;
    }

    cout<<Q2<<"\t\t"<<Nu<<"\t\t"<<Pt2<<"\t\t"<<P<<endl;
    q->Fill(Q2,Nu,Pt2,P);
    p>>Q2>>Nu>>Pt2>>P; 
  
  }
  
  t->Draw();
  
  
  
  p.close();
return 0;  
}
