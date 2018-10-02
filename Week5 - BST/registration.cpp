#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>a;
	int n;
    cin>>n;
    string s;
    while(n>0)
    {
        cin>>s;
        if(a[s]!=0)
        {
        	a[s]++;
		} 
        else
        {
        	a[s]=1;
		}
        if(a[s]==1)
        {
        	cout<<"OK"<<endl;
		}
        else
        {
            cout<<s<<a[s]-1<<endl;
        }
        n--;
    }
    return 0;
}
