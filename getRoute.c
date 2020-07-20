#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*??????8*8????????8???,????????8?????????,???2??????????????????????????????????*/
int chk18(long m){
	int f[10],i,fg;
	for (i = 0; i < 10; i++)
	{
		f[i]=0;
	}
	while(m!=0){
		f[m%10]++;
		m=m/10;
	}
	for (fg=1,i=1;i<=8;i++)
	{
		if (f[i]!=1)
		{
			fg=0;
			break;
		}
	}
	return fg;
}


int chkdia(long m){
	int g[9],i,j,fg;
	for (i = 8; i >= 1; i--)
	{
		g[i]=m%10;
		m=m/10;
	}
	fg=1;
	for (i = 1; i <= 7; i++)
	{
		for(j=i+1;j<=8;j++){
			if(abs(g[j]-g[i])==j-i){
				fg=0;
				break;
			}
		}
	}
	return (fg);
}

int main(void)
{
	int n=0;
	long a;
	for ( a = 12345678; a <= 87654321; a+=9)
	{
		if (chk18(a)==0)
		{
			continue;
		}
		if (chkdia(a)==0)
		{
			continue;
		}
		printf("%ld    ", a);
		n++;
		if (n%6==0)
		{
			printf("\n");
		}
	}
	printf("\n·½°¸Êý£º%d\n",n);
	
	return 0;
}
