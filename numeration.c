#include <stdio.h>
#include <stdlib.h>
/*����һ��ʮ������n��һ�����������Ļ���r������ʮ������ת��Ϊ�˸������µ�����-R��{-2��-3��-4����-20}*/
int main(void){
	char digit[]={"0123456789ABCDEFGHIJ"};
	char result[100];
	int t,n,r,i,j,k,m,s;
	
	while(1){
		printf("\n����ʮ���ƺ͸����ƻ�����\n");
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
