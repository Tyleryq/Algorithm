#include <stdio.h>

/*每次在一块矩形的区域上查找,分成N*M个小方块,如果有石油,则用@标记,否则用*标记,如果含有石油的小块是相邻的,则他们属于一块石油地,相邻包括水平，垂直、对角相邻。先给定一块已经标记过的矩形区域，找出这块区域上石油地块的个数。
输入：第一行输入两个数M，N，（1<=M,N<=100）,接下来是M行，每行含有N个字符,每个字符要么是“@”,要么是”*”。
输出：一个整数,它表示石油的地块数。  */
char a[100][100];
int b[100][100],n,m;
int x[]={0,-1,-1,-1,0,1,1,1};
int y[]={1,1,0,-1,-1,-1,0,1};

void dfs(int i,int j){
	int k;
	int tx,ty;
	b[i][j]=0;
	for (k = 0; k < 8; k++)
	{
		tx=i+x[k];
		ty=j+y[k];
		if (tx>=0&&tx<n&&ty>=0&&ty<m&&b[tx][ty]&&a[tx][ty]=='@')
		{
			dfs(tx,ty);
		}
	}
}

int queue[1000][2];
void bfs(int i,int j){
	int k,tx,ty,cx,cy;
	int head=0,tail=0;
	queue[tail][0]=i;
	queue[tail][1]=j;
	tail++;
	b[i][j]=0;
	while(head<tail){
		cx=queue[head][0];
		cy=queue[head][1];
		head++;
		for(k=0;k<8;k++){
			tx=cx+x[k];
			ty=cy+y[k];
			if(tx>=0&&tx<n&&ty>=0&&ty<m&&b[tx][ty]&&a[tx][ty]=='@'){
				queue[tail][0]=tx;
				queue[tail][1]=ty;
				tail++;
				b[tx][ty]=0;
			}
		}
	}
}

int main()
{
	int i,j,num;
	while(1){
		printf("input n,m:\n");
		scanf("%d %d",&n,&m);
		if (n==0&&m==0)
		{
			break;
		}
		for (i = 0; i < n; i++)
		{
			for(j=0;j<m;j++)
				b[i][j]=1;
		}
		num=0;
		for (i = 0; i < n; i++)
		{
			scanf("%s",&a[i]);
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (b[i][j]&&a[i][j]=='@')
				{
					num++;
					//bfs(i,j);
					dfs(i,j);
				}
			}
		}
		printf("%d\n", num);
	}
	return 0;
}
