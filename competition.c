#include"stdio.h"
#include <stdlib.h>
/*输入比赛时的每个球的胜负，然后分别计算在11分制和21分制下，双方的比赛结果。 */
int main()
{ 
	int w[1000]={0},l[1000]={0},i=0,n=0,m=0;
	char a;
	FILE *fp;
	printf("比赛胜负输入在test2data.txt文件\n");
	fp=fopen("test2data.txt","r");
	while(fscanf(fp,"%c",&a)!=EOF)
	{ 
		if (a=='E')break;
		if (a=='W') w[i++]++;
		if (a=='L') l[i++]++;
	}
	for(i=0;w[i]==1||l[i]==1;i++)
	{ 
		if (w[i]==1) n++;
		else m++;
		if (n==11) { printf("%d:%d\n",n,m);n=0;m=0;}
		if (m==11) { printf("%d:%d\n",n,m);m=0;n=0;}
	}
	if(n!=0||m!=0) printf("%d:%d\n",n,m);
	printf("\n");
	for(m=0,n=0,i=0;w[i]==1||l[i]==1;i++)
	{ 
		if (w[i]==1) n++;
		else m++;
		if (n==21) { printf("%d:%d\n",n,m);n=0;m=0;}
		if (m==21) { printf("%d:%d\n",n,m);n=0;m=0;}
	}
	if(n!=0||m!=0) printf("%d:%d\n",n,m);
	system("pause");
	return 0;
}