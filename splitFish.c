#include <stdio.h>
#include <stdlib.h>
/*1.A、B、C、D、E5个渔夫夜间合伙捕鱼，各自在河边的树丛中休息。待日上三竿，渔夫A第一个醒来，他将鱼分作5份，把多余的一条扔回河中，拿自己的一份回家了。渔夫B第二个醒来，也将鱼分作5份，扔掉多余的一条，拿走自己的一份，接着后三个也按同样的办法分鱼，问5个渔夫至少合伙捕了多少条鱼？*/
int main()
{
int n,i,x,flag=1; 
for(n=6;flag;n++) 
{
for(x=n,i=1&&flag;i<=5;i++)
if((x-1)%5==0) x=4*(x-1)/5;
else flag=0; 
if(flag) break; 
else flag=1; 
}
printf("Total number of fish catched=%d\n",n); 
system("pause");
}