{
gROOT->Reset();

TString n;

TH1F *h = new TH1F[4];
TRandom3 *r = new TRandom3[4];

for (int i=0; i<4;i++){
	n.Form("h%d\n",i);	//Aquí realicé la tarea que me dejó Cristian, usar TString.Form()
	h[i]=new TH1F("histograma "+n, n,100,0,10);
	r[i]=new TRandom3();
}

for(int j=0; j<10000; j++){
	h[0]->Fill(r[0]->Gaus(3,2));
	h[1]->Fill(r[1]->Gaus(5,1));
	h[2]->Fill(r[2]->Gaus(7,3));
	h[3]->Fill(r[3]->Gaus(8,5));
}

TCanvas c("c1","first canvas", 400, 300);
	c.Divide(2,2);
	for(int k=0;k<4;k++){	
		c.cd(k+1);
		h[k]->Draw();
	}	
}
