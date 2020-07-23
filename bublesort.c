#include <stdio.h>
#include <stdlib.h>

//冒泡排序
int main(int argc, char const *argv[])
{
	int a[10]={1,4,7,4,7,1,6,3,5,4};
	int i,t,n;

	for(n=9;n>0;n--){
		for (i = 0; i < n; i++)
		{
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	system("pause");
				
	return 0;
}
