int GetGCDRec(int n,int m){
	if(m<n){
		m^=n;
		n^=m;
		m^=n;
	}
	
	if(n==0)
		return m;
	else
		return GetGCDRec(n,m%n);
}