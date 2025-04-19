{
gROOT->Reset();



TH1F *t1 = new TH1F("t1","uno",13,23.,45.);
TH1F *t2 = new TH1F("t2","dos",13,23.,45.);
TH1F *t3 = new TH1F("t3","tres",13,23.,45.);
TH1F *t4 = new TH1F("t4","cuatro",13,23.,45.);

t1.FillRandom("gaus", 10000);
t2.FillRandom("gaus", 20000);
t3.FillRandom("gaus", 30000);
t4.FillRandom("gaus", 40000);

t1.Draw()



     TMultiGraph *mg = new TMultiGraph();
     mg->Add(gr1,"lp");
     mg->Add(gr2,"cp");
     mg->Draw("a");



return 0;
}





// th1f ** histo=new Th1f *[5]
