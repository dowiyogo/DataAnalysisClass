{
gROOT->Reset();

TH2F* h = new TH2F("h", "Segundo histo",100,0,10,100,0,10);

TRandom3* r = new TRandom3();
TRandom3* r2 = new TRandom3();

for(int i = 0; i< 10000; i++){
  h->Fill(r->Gaus(3,2),r2->Gaus(5,1));
}

h->Draw("COLZ");
}
