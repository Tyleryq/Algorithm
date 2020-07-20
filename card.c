
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
#define NUM 10000
 /*�����������Ĺ���ģ��Ϊ4����ҷ��ƣ���ӡ��ÿ����ҵ�12���ƺ�6�ŵ��ơ�*/
char color[7][7] = {"�հ�","����","����","÷��","����","С��","����"};
char number[]={"0A234567890JQK"}; 
 

struct card{
    unsigned int number;
    unsigned int color;
};
 
unsigned int NUM_card=53; 
 
struct card card[54]; 
 
 

void creat_pair_card()
{
    int num=1;
    int col=1;
    int i=0;
    for(num=1;num<=15;num++)
    {
        
        if(num>=14)
        {
            card[i].number=num;
            card[i].color=col++;
            i++;
        }
        else
        {
            
            for(col=1;col<=4;col++)
            {
                card[i].number=num;
                card[i].color=col;
                i++;
            }
        }
    }
}
 

void print_card()
{
    int i;   
    int num,col; 
    for(i=0;i<54;i++)
    {
        col=card[i].color;
        num=card[i].number;
		
		if(i==0)	printf("���A:\n");
		else if(i==12)	printf("\n���B:\n");
		else if(i==24)	printf("\n���C:\n");
		else if(i==36)	printf("\n���D:\n");
		else if(i==48)	printf("\nʣ��:\n");
        if(col>=5)
        {
            printf("%s\t",color[col]);
        }
        else
        {
            if(num==10)
            {
                printf("%s:",color[col]);
                printf("10\t");
            }
            else
            {
                printf("%s:",color[col]);
                printf("%c\t",number[num]);
            }
        } 
    }
    printf("\n");

}
 
 

void wash_card()
{
    int i;
    int ch1,ch2;
    srand((unsigned)time(NULL));
    for(i=0;i<NUM;i++) 
    {
        
        
        ch1=rand()%100;  
        ch2=rand()%100;
        
 
        if(ch1>53)
        {
            ch1=100-ch1; 
        }
 
        if(ch2>53)
        {
            ch2=100-ch2;
        }
 
        if(ch1 == ch2)
        {
            continue;
        }
        
        struct card tmp=card[ch1];
        card[ch1]=card[ch2];
        card[ch2]=tmp;
    }
}
 

 
 
 
int main(void)
{
 
    creat_pair_card(); 
    wash_card();
    print_card();
 
	system("pause");
}
