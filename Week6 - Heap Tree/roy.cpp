#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	priority_queue<pair<ll, int> > pq;
	map<int, ll> m;
	for(int i=0; i<t; i++)
	{
		ll id,oldz,p,s,l,c;
	    cin>>id>>oldz>>p>>l>>c>>s;
	    ll newz=(p*50)+(l*5)+(c*10)+(s*20);
	    ll changez=newz-oldz;
	    m[id]=newz;
	    pq.push(make_pair(changez, id));
	}
	for(int i=0; i<5; i++)
	{
		if(pq.empty())
		{
	       break;
	    }
	    pair<ll, int>val=pq.top();
	    cout<<val.second<<" "<<m[val.second]<<endl;
	    pq.pop();
	}
    return 0;
}
