#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

char map[1100][1100];
int vis[1100][1100];
int sum;
int time[1100][1100];
int num[1100*1100];
int n,m;
int b[4][2]={ {0,1},{0,-1},{1,0},{-1,0} };

int dfs(int x,int y,int pos)
{
	int i;
	vis[x][y]=1;
	for(i=0;i<4;i++)
	{
		int dx=x+b[i][0];
		int dy=y+b[i][1];
		if(vis[dx][dy]==0&&dx>=1&&dx<=n&&dy>=1&&dy<=m)
		{
			if(map[dx][dy]=='*')
			{
				sum++;
			}
			else
			{
				time[dx][dy]=pos;
				dfs(dx,dy,pos);
			}
		}
	}
	return 0;
}


int main()
{
	int i,j;
	int k;
	int pos;
	scanf("%d%d%d",&n,&m,&k);
	for(i=1;i<=n;i++)
	{
		getchar();
		for(j=1;j<=m;j++)
		{
			scanf("%c",&map[i][j]);
			vis[i][j]=0;
		}
	}
	getchar();
	pos=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(map[i][j]=='.'&&vis[i][j]==0)
			{
				pos++;
				sum=0;
				time[i][j]=pos;
				dfs(i,j,pos);
				num[time[i][j]]=sum;
			}
		}
	}
	while(k--)
	{
		int sx,sy;
		scanf("%d%d",&sx,&sy);
		printf("%d\n",num[time[sx][sy]]);
	}
	return 0;
}
