#include <stdio.h>
#include <string.h>  
#include <math.h>
#include <stdlib.h>
/*棋盘上A点有一个过河卒，需要走到目标B点。卒行走的规则：可以向下、或者向右。同时在棋盘上C点有一个对方的马，该马所在的点和所有跳跃一步可达的点称为对方马的控制点。棋盘用坐标表示，A点(0, 0)、B点(n, m)(n, m为不超过20的整数)，同样马的位置坐标是需要给出的。现在要求你计算出卒从A点能够到达B点的路径的条数*/
int main()
{
    int n,m,nn,mm,i,j;
    long long f[100][100];
    scanf("%d%d%d%d",&n,&m,&nn,&mm);
    nn++; mm++; n++; m++;

    memset(f,0,sizeof(f)); f[0][1]=1;
    for (i=1;i<=n;i++)
      for (j=1;j<=m;j++)
        if ((abs(i-nn)+abs(j-mm)==3)&&(i!=nn)&&(j!=mm)||(i==nn&&j==mm));
          else f[i][j]=f[i-1][j]+f[i][j-1];

    printf("\n%d\n", f[n][m]);
    system("pause");
    return 0;
    }
