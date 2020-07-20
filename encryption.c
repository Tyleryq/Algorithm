#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*选择一个单词做秘钥，如TRAILBLAZERS,如果单词中有重复字母，则只保留第1个，其余几个丢弃，用字母表中没有出现的字母将秘钥填充完整，加密时，将原文中字母按以上对应关系一一用秘钥字母代替，也用这个秘钥进行解密。输入：1表示加密，2表示解密，秘钥单词（<15个字符），密文或原文（<200个字符）输出：密文或原文。*/
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
