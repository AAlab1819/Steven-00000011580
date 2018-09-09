#include<iostream>
using namespace std;

int main()
{
	int n;//the number of stewards
	int max;
	int min;
	int h;//the number of steward that John helps
	h=0;
	cin>>n;
	int a[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	max=a[0];
	min=a[0];
	
	for (int i=0; i<n; i++)
    {
		if (a[i] > max)
		{
        	max = a[i];
        }
      	else if (a[i] < min)
        {
        	min = a[i];
        }
    }
  	
  	for(int i=0; i<n; i++)
	{
		if(a[i]<max&&a[i]>min)
		{
			h++;
		}
	}
	
	cout<<h<<endl;
	
	return 0;
  	
}
