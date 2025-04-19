{
gROOT->Reset();
gROOT->cd();

struct P{

  double px;
  double py;
  double pz;
  double E;
  
} mom;

TFile *f= new TFile("out.root");
TTree *t= (TTree*)f->Get("Tree");

t->SetBranchAddress("P",&mom.px);

int n_entries=t->GetEntries();
TRandom3 *r= new TRandom();

TH1F *mass=new TH1F("mass", "masas",100,0,2);

for(int i=0;i<n_entries;i++){
        t->GetEntry(i);
        float mp=TMath::Sqrt((mom.E*mom.E)-(mom.px*mom.px+mom.py*mom.py+mom.pz*mom.pz));
        mass->Fill(r->Gaus(mp,0.01));
        }
        
mass->SetLineColor(kMagenta+2);        
mass->Draw();
}
