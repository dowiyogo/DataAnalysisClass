{
gROOT -> Reset();
gROOT ->cd();

struct P{
  Double_t px;
  Double_t py;
  Double_t pz;
  Double_t E;
} mom, lun;


TFile *f=new TFile("out.root","RECREATE"); 
TTree *tree=new TTree("Tree","tree filled using a struct");
tree->Branch("P",&mom.px,"px/D:py:pz:E"); // px / D es double 
tree->Branch("p2",&lun.px,"x/D:y:z:t");

const Float_t Mpi= 0.139;
const Float_t Mde= 1.234;

TRandom3 *r=new TRandom3();

for (Int_t i=0; i<10000;i++){
if (i<5000){

  mom.px=r->Gaus(5,2);
  mom.py=r->Gaus(5,2);
  mom.pz=r->Gaus(5,2);
  mom.E= TMath::Sqrt(mom.px*mom.px+mom.py*mom.py+mom.pz*mom.pz+Mpi*Mpi);

 }
else {
  mom.px=r->Gaus(5,2);
  mom.py=r->Gaus(5,2);
  mom.pz=r->Gaus(5,2);
  mom.E= TMath::Sqrt(mom.px*mom.px+mom.py*mom.py+mom.pz*mom.pz+Mde*Mde);
}
  lun.px=r->Gaus(4,1);
  lun.py=r->Gaus(4,1);
  lun.pz=r->Gaus(4,1);
  lun.E= r->Gaus(3,1);
    tree->Fill();
  
}

f->Write();
f->Close();


return 0;
}
