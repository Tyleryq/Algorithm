#include <stdio.h>
#include "getgcdrec.h"

/*1.设 两数为a、b(a<=b)，求它们最大公约数GCD(a，b) .输入a、b，输出GCD(a，b)。*/
int main(void){
	int a=0,b=0,r=0;
	scanf("%d%d",&a,&b);
	r=GetGCDRec(a,b);
	printf("%d\n",r);
	return 0;
}