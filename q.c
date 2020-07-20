#include <stdio.h>
/*两位计算机爱好者在进行“积为n个1的数字游戏”，其中一位给定一个正整数p（约定整数p为各位数字不是5的奇数），另一位寻求正整数q，使得p与q之积为全是1组成的整数。输出q和积的1的个数。 */
int main(void)
{
	int a,b,p,c,n,t,f;
	while(1){
		scanf("%d",&p);
		c=0;
		n=0;
		f=1;
		while(c!=0||f!=0){
			a=c*10+1;
			c=a%p;
			b=a/p;
			n++;
			if(f==1&&b==0)	continue;
			printf("%d",b);
			f=0;
		}
		printf("\t%d\n", n);
	}
	return 0;
}