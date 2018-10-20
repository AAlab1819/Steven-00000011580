#include<iostream>
using namespace std;

int main()
{
	int n,i,a,next=0;
	cin>>n;
	for(i=0;i<n;++i)
	{
		cin>>a;
		a+=next;
		if(a&1)
		{
			next=-1;
		}
		else
		{
			next=0;
		}
		
		if(a<0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	
	if(next==-1)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
		
}
