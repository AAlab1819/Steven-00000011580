#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
	int x;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		if(x > 0)
		{
			sum += x;
		}
		else
		{
			sum -= x;
		}
	}
	cout<<sum<<endl;
	return 0;
}
