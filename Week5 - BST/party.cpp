#include<bits/stdc++.h>
using namespace std;

int main()
{
	int fa[2005];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
	{
		cin>>fa[i];
	}
	int ans=0;
    for (int i=1; i<=n; i++)
    {
        int tmp=0;
        for (int j=i; j<=n && j!=-1; j=fa[j])
        {
            tmp++;
        }
        ans=max(ans,tmp);
    }
    cout<<ans<<endl;
    return 0;
}
