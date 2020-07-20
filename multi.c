#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*求两个不超过50位的非负整数的积。*/
int main()
{
	char sa[51],sb[51],sc[101];
	int a[50],b[50],c[100],i,j,k,d,alen,blen;
	while(1){
		printf("input a,b:\n");
		scanf("%s",sa);
		scanf("%s",sb);
		for (i = 0; i < 50; i++)
		{
			a[i]=0;
			b[i]=0;
		}
		alen=strlen(sa);
		i=alen-1;
		k=0;
		while(i>=0){
			a[k++]=sa[i--]-'0';
		}
		blen=strlen(sb);
		i=blen-1;
		k=0;
		while(i>=0){
			b[k++]=sb[i--]-'0';
		}

		for (i = 0; i < 100; i++)
		{
			c[i]=0;
		}
		for (i = 0; i < alen; i++)
		{
			for (j = 0; j < blen; j++)
			{
				c[i+j]+=a[i]*b[j];
			}
		}
		k=99;
		while(k>=0&&c[k]==0)	k--;
		d=0;
		i=0;
		while(i<=k){
			c[i]+=d;
			d=c[i]/10;
			c[i]%=10;
			i++;
		}
		while(d>0){
			c[i]=d%10;
			d=d/10;
			i++;
		}
		k=i;
		for (i = k-1; i >= 0; i--)
		{
			sc[k-1-i]=c[i]+'0';
		}
		sc[k]='\0';
		printf("%s\n", sc);

	}
	return 0;
}