#include <stdio.h>
#include <string.h>
/*从1开始按正整数的顺序连续写下去所构成的整数称为连写数，要使连写数123456789101112…m（连写到m）能被给定整数p（p<1000）整除，m至少为多大？输出商和m。 */
int main(void)
{
	int a,b,p,c,len,m,k,f;
	char buff[10];
	scanf("%d",&p);
	c=1;
	m=1;
	f=0;
	while(c!=0){
		m++;
		sprintf(buff,"%d",m);
		len=strlen(buff);
		k=0;
		while(k<len){
			a=c*10+(buff[k]-'0');
			k++;
			c=a%p;
			b=a/p;
			if(f==0&&b==0){
				continue;
			}
			f=1;
			printf("%d", b);
		}
	}
	printf("\t%d\n", m);
	return 0;
}