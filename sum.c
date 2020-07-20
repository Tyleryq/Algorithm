#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*??????200?????????*/
int main()
{
	char s[202];
	int sum[201];
	int i,j,d,len,maxlen=0;
	for (i = 0; i < 201; i++)
	{
		sum[i]=0;
	}
	for (i = 0; i < 2; i++)
	{
		printf("ÊäÈë´óÊý£º");
		scanf("%s",s);
		len=strlen(s);
		if (len>maxlen)
		{
			maxlen=len;
		}
		for (j = len-1; j>=0; j--)
		{
			sum[len-1-j]+=s[j]-'0';
		}
	}
	for (i = 0,d=0; i <maxlen; i++)
	{
		sum[i]+=d;
		d=sum[i]/10;
		sum[i]%=10;
	}
	if (d>0)
	{
		sum[maxlen++]+=d;
	}
	for (i = maxlen-1; i >= 0; i--)
	{
		s[maxlen-1-i]=sum[i]+'0';
	}
	
	s[maxlen]='\0';
	printf("sum:%s\n",s);

	system("pause");
	return 0;
}
