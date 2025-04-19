{
gROOT->Reset();

TString n;

TH1F *h = new TH1F[3];
TRandom3 *r = new TRandom3();

for (int i=0; i<3;i++){
	n.Form("landau %d\n",i);	
	h[i]=new TH1F("distribucion "+n, n,100,0,20);
}

for(int j=0; j<100; j++) h[0]->Fill(r->Landau(2.1,1.5));
for(int k=0; k<1000; k++) h[1]->Fill(r->Landau(2.1,1.5));
for(int l=0; l<10000; l++) h[2]->Fill(r->Landau(2.1,1.5));

TCanvas c("distribuciones landau",":D", 400, 300);
	c.Divide(2,2);
	for(int m=0;m<3;m++){	
		c.cd(m+1);
		h[m]->Fit("landau");
		h[m]->Draw();
	}	
}

/*
- pion(+/-) -> vida media 2,6e-8 [s]; masa 139,6 [MeV/c²];
- pion (0) -> vida media 8,4e-17 [s]; masa 135,0 [MeV/c²];
los piones +/- son más fáciles de medir ya que su vida media es más grande, por lo tanto duran más antes de 
desintegrarse.
calcular la distancia que alcanza a recorrer... resolucion espacial de un detector de piones */


