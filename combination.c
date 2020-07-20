#include <stdio.h>
/*从1…n任取r个数组成组合数，例如，n=5，r=3的所有组合数：123,124,125,134,135,145,234,235,245,345，输入n、r值，输出组合数及其方案数。*/
int main()
{
	int x[10],fg,k,i,s,n,j,r;
	scanf("%d%d",&n,&r);
	i=1;
	s=0;
	x[i]=1;
	while(1){
		fg=1;
		for (k = i-1; k>=1 ; k--)
		{
			if (x[k]>=x[i])
			{
				fg=0;
			}
		}
		if (fg==1&&i==r)
		{
			s++;
			for(j=1;j<=r;j++)
				printf("%2d", x[j]);
			printf("\n");
		}
		if (fg&&i<n)
		{
			i++;
			x[i]=1;
			continue;
		}
		while(x[i]==n&&i>1)
			i--;
		if (i==1&&x[i]==n)
		{
			break;
		} else
			x[i]=x[i]+1;
	}
	printf("%d\n", s);
	return 0;
}
