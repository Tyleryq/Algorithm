#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*��һЩӢ���ַ���ɵĴ�Сд���е��ַ��������ȣ��������������ҵ�һ������ַ���x��ʹ�ö����Ѿ��������ַ����е�����һ����y��x������y���Ӵ�������x�ķ�����y���Ӵ�������ַ���x��*/
int main(void){
	char str[100][101],minstr[101],substr[101],revsubstr[101];
	unsigned int i,j,t,m,n,substrlen,found,minlen;
	while(1){
		printf("���봮������");
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
		printf("�Ӵ�Ϊ:%s\n\n",substr);
		
	}
	
	return 0;
}
