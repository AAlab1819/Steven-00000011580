#include<bits\stdc++.h>
using namespace std;
#define LL long long
const int maxn = 1005;
int a[maxn];
int main()
{
     int n,l;
	 scanf("%d%d",&n,&l);
	 for(int i = 0;i<n;i++)
		 scanf("%d",&a[i]);
	 sort(a,a+n);
	 double ans = max(a[0],l-a[n-1]);
	 for(int i = 1;i<n;i++)
		 ans = max(ans,(a[i]-a[i-1])/2.0);
	 printf("%.10lf\n",ans);
}
