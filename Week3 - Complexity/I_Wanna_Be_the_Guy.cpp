#include<iostream>
#include <cstddef>
using namespace std;

int main()
{
	int n;//total level
	int a;//Little X's level
	int b;//Little Y's level
	int c;//combination of Little X and Little Y's level
	int count;
	count=0;
	cin>>n;
	cin>>a;
	int x[a];
	
	for(int i=0; i<a; i++)
	{
		cin>>x[i];
	}
	
	cin>>b;
	int y[b];
	
	for(int i=0; i<b; i++)
	{
		cin>>y[i];
	}
	
	c=a+b;
	int z[c];
	
	for(int i=0; i<a; i++)
	{
		z[i]=x[i];
	}
	
	for(int i=0; i<c; i++)
	{
		z[i+a]=y[i];
	}
	
	for(int i=0;i<c;++i)
	{
        for(int j=i+1;j<c;)
        {
            if(z[i]==z[j])
            {
                for(int k=j;k<c-1;++k)
                {
					z[k]=z[k+1];
             	}
				--c;
            }
            else
            {
				++j;
            }
        }
    }
    
    for(int i=0; i<c; i++)
	{
		if(z[i]>n)
		{
			z[i]=NULL;
			count++;
		}
	}
    
    c=c-count;
    
	if(c==n)
	{
		cout<<"I become the guy.";
	}
	else
	{
		cout<<"Oh, my keyboard!";
	}
    
}
