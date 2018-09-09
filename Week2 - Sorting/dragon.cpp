#include<iostream>
#include<algorithm>
using namespace std;

struct D
{
    int x;
    int y;
};

bool cmp (D a,D b)
{
    return a.x < b.x;
}

int main()
{
    int s,n,i = 0,j = 0,k,e,f;
    struct D a[1000],b[1000];
    cin >> s>> n;
    while(n--)
    {
        cin >> e>> f;
        if(e < s)
        {
            a[i].x = e;
            a[i].y = f;
            i++;
        }
        if(e >= s)
        {
            b[j].x = e;
            b[j].y = f;
            j++;
        }
    }
    
    sort(b,b+j,cmp);
    for(k = 0;k < i;k++)
        s += a[k].y;
    for(k = 0;k < j;k++)
    {
        if(s > b[k].x)
            s += b[k].y;
        else
            break;
    }
    if(k == j)cout <<"YES"<<endl;
    else cout<< "NO"<<endl;
    return 0;
}
