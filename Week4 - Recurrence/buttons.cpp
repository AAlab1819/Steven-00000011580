#include<iostream>
using namespace std;

int main()
{
    int n;//number of buttons
    int p;//number of worst possibilities
    cin>>n;
    while(n>0)
    {
        p=n;
        for(int i=1;i<=n;i++)
        {
            p+=i*(n-i);
        }
        cout<<p<<endl;
        return 0;
    }
}
