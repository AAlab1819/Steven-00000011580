#include<bits/stdc++.h>
using namespace std;

int G[1100][1100];
int leaf[1100];
int main()
{
    int n;
    cin>>n;
    while(n>0)
	{
        memset(G,0,sizeof(G));
        memset(leaf,0,sizeof(leaf));
        int u;
        for (int v=2;v<=n;v++)
		{
            cin>>u;
            G[u][v]=1;
            leaf[u]=1;
        }
        int f=0;
        for (int i=1;i<=n;i++)
		{
            int cnt=0;
            if (!leaf[i])
                continue;
            for (int j=1;j<=n;j++)
			{
                if (G[i][j]&&!leaf[j])
				{
                	cnt++;
				}
            }
            if (cnt<3)
			{
                f=1;
                break;
            }
        }
        if (f)
        {
        	cout<<"No"<<endl;
		}
        else
        {
        	cout<<"Yes"<<endl;
		}
		break;
    }
    return 0;
}
