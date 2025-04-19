{
gROOT->Reset();

int n=3;
double x[n], y[n];

for(int i=1; i<=n; i++)
{
	x[i-1]=i*3;
	y[i-1]=i*0.3;
}

TGraph *gr = new TGraph(n,x,y);
gr->SetMarkerColor(2);
gr->Draw("A*");

}
