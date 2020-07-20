#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*有一些英文字符组成的大小写敏感的字符串（长度１－１００），找到一个最长的字符串x，使得对于已经给出的字符串中的任意一个串y，x或者是y的子串，或者x的反序串是y的子串。输出字符串x。*/
int main(void){
	char str[100][101],minstr[101],substr[101],revsubstr[101];
	unsigned int i,j,t,m,n,substrlen,found,minlen;
	while(1){
		printf("输入串个数：");
		scanf("%d",&n);
		minlen=101;
		for(i=0;i<n;i++){
			scanf("%s",str[i]);
			if(strlen(str[i])<minlen){
				minlen=strlen(str[i]);
				m=i;
			}
		}
		strcpy(minstr,str[m]);
		substrlen=minlen;
		while(substrlen>0){
			for(i=0;i<=minlen-substrlen;i++){
				strncpy(substr,minstr+i,substrlen);
				substr[substrlen]='\0';
				strncpy(revsubstr,minstr+i,substrlen);
				revsubstr[substrlen] ='\0';
				strrev(revsubstr);
				found=1;
				for(j=0;j<n;j++){
					if(strstr(str[j],substr)==NULL&&strstr(str[j],revsubstr)==NULL){
						found=0;
						break;
					}
				}
				if(found)	break;
			}
			if(found)	break;
			substrlen--;
		}
		printf("子串为:%s\n\n",substr);
		
	}
	
	return 0;
}
