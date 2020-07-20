#include <stdio.h>
/*有一瓶12升的酒，同时有容积为5升和8升的空杯各一个，借助这两个空杯，如何将12升的酒平分。设杯子的容量为av ,bv,cv,   酒量为a,b,c.由于杯子没有刻度，只能整杯倒或将杯倒满。为了避免重复倒，倒酒顺序：a-b-c-a或a-c-b-a*/
int main(void)
{
	int a,b,c,bv,cv,R,n;
	scanf("%d%d%d",&a,&bv,&cv);
	R=a/2;
	b=c=0;
	n=0;
	while(!(a==R||b==R||c==R)){
		if(!b){
			if(a<bv){
				n=-1;
				break;
			}else{
				a-=bv;
				b=bv;
			}
		}else if(c==cv){
			a+=cv;
			c=0;
		} else if (b>cv-c)
		{
			b-=cv-c;
			c=cv;
		}else{
			c+=b;
			b=0;
		}
		n++;
		printf("%d\t%d\t%d\n", a,b,c);
	}
	printf("%d\n", n);
	return 0;
}