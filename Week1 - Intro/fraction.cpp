#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	long long sec;
	time(&sec);
	srand((unsigned)sec);
	
	int input;
	int num;
	int den;
	int sum;
	cin>>input;
	
	do
	{
		do
		{
			den = rand()%input+1;
			do
			{
				num = rand()%input+1; 
			}while(num>den);
			
			sum=num+den;
		}
		while(sum!=input||num==den);
		
		if(num==1)
		{
			break;
		}
	}
	while(den%num==0);
	cout<<num<<" "<<den;
}
