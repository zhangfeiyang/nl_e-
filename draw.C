{
	const int n = 70;
	ifstream fin("data");
	
	double PE[n],ePE[n],sigma[n],esigma[n],e[n];
	double tmp;
	for(int i=0;i<n;i++){
		fin>>PE[i]>>ePE[i]>>tmp>>sigma[i]>>esigma[i];
		PE[i] /= (i+1)/10.0;
		ePE[i] /= (i+1)/10.0*1340;
		e[i] = (i+1)/10.0*1340;
	}

	TGraphErrors *t = new TGraphErrors(n,e,PE,0,ePE);
	t->Draw();
}	
