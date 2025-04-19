{
gROOT->Reset();
gROOT->cd();

struct P{
  double px;
  double py;
  double pz;
  double E;
} mom;

struct X{
  Float_t x;
  Float_t y;
  Float_t z;
  Float_t t;
} pos;

TFile* f = new TFile("out.root","RECREATE");
TTree* tree = new TTree("Tree","tree filled using a struct");

tree->Branch("P",&mom.px,"px/D:py:pz:E");
tree->Branch("X",&mom.px,"x/F:y:z:t"); //rama de posición aunque no se ocupa

const float Mpi = 0.139;
const float Mk= 0.493; 
const float Md= 1.232; 

TRandom3* r = new TRandom3();

for(int i = 0; i<3000; i++){
  mom.px = r->Gaus(3,1);
  mom.py = r->Gaus(7,3);
  mom.pz = r->Gaus(5,4);
  if(i<=1000) mom.E = TMath::Sqrt(mom.px*mom.px+mom.py*mom.py+mom.pz*mom.pz+Mpi*Mpi); //energía de un pion
  else{ if (i>1000&&i<=2000) mom.E = TMath::Sqrt(mom.px*mom.px+mom.py*mom.py+mom.pz*mom.pz+Mk*Mk); //energía de un kaon
  else mom.E = TMath::Sqrt(mom.px*mom.px+mom.py*mom.py+mom.pz*mom.pz+Md*Md); //energía de un delta
  }
  tree->Fill();
}
tree->Draw("P.px","P.py>5","");
f->Write();
f->Close();
}
