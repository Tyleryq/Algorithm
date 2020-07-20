#include <stdio.h>
#include <stdlib.h>
/*读入一个十进制数n和一个负进制数的基数r，将此十进制数转换为此负进制下的数：-R∈{-2，-3，-4…，-20}*/
int main(void){
	char digit[]={"0123456789ABCDEFGHIJ"};
	char result[100];
	int t,n,r,i,j,k,m,s;
	
	while(1){
		printf("\n输入十进制和负进制基数：\n");
		scanf("%d%d",&n,&r);
		result[99]='\0';
		m=99;
		s=n;
		while(n!=0){
			if(n>=(n/r)*r){
				k=n-(n/r)*r;
				n=n/r;
			} else {
				k=n-(n/r)*r-r;
				n=n/r+1;
			}
			result[--m]=digit[k];
			
		}
		printf("%d=%s(base%d)\n",s,&result[m],r);
	}
	return 0;
}
