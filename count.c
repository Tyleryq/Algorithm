#include <stdio.h>
#include <stdlib.h>
/*???????x,???????x???????????????,???????9??,????????????*/
int main(void)
{
	long y,z;
	int x,s[10],i,j,t,k,n;
	while(1){
		printf("input x:\n");
		scanf("%d",&x);
		x=x>32000?32000:x;
		n=0;
		for (i = 10000; i < x; i++){
		
			for(j=0;j<=9;j++){
				s[j]=0;
			}
		
			y=i*i;
			k=0;
			z=y;
			while(z!=0){
				if(s[z%10]==1)
					break;
			    s[z%10]=1;
			    k++;
			    z=z/10;
			}
			if(k==9){
				n++;
				printf("%d^2=%ld    ",i,y);
				if(n%3==0)
					printf("\n");
			}
		}
		printf("\n·½°¸Êý£º%d\n", n);
	}
	return 0;
}
