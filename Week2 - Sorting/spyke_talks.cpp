#include<iostream>
using namespace std;

int main()
{
	int n;//number of secretaries
	int p=0;//pairs of secretary
	int temp;
	cin>>n;
	int a[n];//secretary id
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0; i<n-1; i++)//bubble sort
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		if(a[i]!=0)
		{
			if(a[i]==a[i+1])
			{
				
				if(a[i]==a[i+2])
				{
					cout<<"-1"<<endl;
					return 0;
				}
				else
				{
					p++;
				}
			}
		}
		else
		{
			//do not count double or more zero
		}
	}
	
	cout<<p<<endl;
	
	return 0;
}
