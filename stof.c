#include <stdio.h>
#include <math.h>

//字符串转float
int main(int argc, char const *argv[])
{
	char *str="123.34";
	int numstr[10]={0};
	int xpos,t;
	float result=0;
	int i,j;
	for ( i = 0; str[i]!='\0'; i++)
	{
		if (str[i]!='.')
		{
			numstr[i] = str[i]-48;
		} else {
			xpos=i;
		}
		
	}
	t=xpos;


	for (j = 0; j<i; j++)
	{
		if (j!=xpos)
		{
			result+=numstr[j]*pow(10,t-1);
			t--;
		}
		
	}

	printf("%f\n", result);


	getchar();
	return 0;
}