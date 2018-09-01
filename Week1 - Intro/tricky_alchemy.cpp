#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    long long int ycryst, bcryst;
    long long int yball, gball, bball;
    long long int yadd, badd;//required yellow and blue cryst to create all balls
    long long int totaladd;

    cin >> ycryst;
	cin >> bcryst;
    cin >> yball;
	cin >> gball;
	cin >> bball;
	
	do
	{
		ycryst=ycryst-2;//yball= 2 ycryst
		yball=yball-1;
	}
	while(yball!=0);
	
	do
	{
		ycryst=ycryst-1;//gball = ycryst + bcryst
		bcryst=bcryst-1;
		gball=gball-1;
		
	}
	while(gball!=0);
	
	do
	{
		bcryst=bcryst-3;//bball = 3 bcryst
		bball=bball-1;
	}
	while(bball!=0);
	
	yadd=abs(ycryst);
	badd=abs(bcryst);
	
	totaladd=yadd+badd;
	cout<<totaladd;
	
	return 0;
}
