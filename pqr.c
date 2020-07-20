#include <stdio.h>
/*1.??????p?q? r,???????? B(2<=B<=16) ?? p * q = r. ?? B?????, ????????*/
int maxdigit(int m){
	int maxd=0,k;
	while(m!=0){
		k=m%10;
		if(k>maxd)	maxd=k;
		m=m/10;
	}
	return maxd;
}

int convtdecimal(int m,int k){
	int p,s;
	s=0;
	p=1;
	while(m!=0){
		s+=m%10*p;
		m/=10;
		p=p*k;
	}
	return s;
}

int main(void){
	int p,q,r,B,d;
	int dp,dq,dr;

	while(1){
	
		printf("输入p,q,r值：");
		scanf("%d%d%d",&p,&q,&r);
		B=maxdigit(p);
		d=maxdigit(q);
		if(d>B)
			B=d;
		d=maxdigit(r);
		if(d>B)
			B=d;
		for(B++;B<=16;B++){
			dp=convtdecimal(p,B);
			dq=convtdecimal(q,B);
			dr=convtdecimal(r,B);
			if(dp*dq==dr)	break;
		}
		if(B>16)	B=0;
		printf("B值为：%d\n\n\n",B);
	}
	return 0;
}

