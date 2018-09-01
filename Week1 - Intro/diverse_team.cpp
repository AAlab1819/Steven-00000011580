#include<iostream>
using namespace std;

int main()
{
	int numStudent, numGroup;
	cin>>numStudent;
	cin>>numGroup;
	int order[numGroup];
	int rating[numStudent];
	int diff;
	for(int i=0; i<numStudent; i++)
	{
		cin>> rating[i];
	}
	
	for(int i=1; i<numStudent; i++)
	{
		if(rating[i]>rating[i-1]||rating[i]!=rating[i-1])
		{
			order[i-1]=i;
			diff++;
		}
	}
	
	order[numGroup-1]=numStudent;
	
	if(diff!=numGroup)
	{
		cout<<"NO!"<<endl;
	}
	else
	{
		diff=0;
		cout<<"YES"<<endl;
		do
		{
			order[diff];
			cout<<order[diff]<<" ";
			diff++;
			if(diff>numGroup)
			{
				break;
			}
		}
		while(diff!=numGroup);
	}
}
