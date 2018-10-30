#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[123456];

int main(){
    int n;
    ll sum;cin>>n>>sum;
    for(int i = 0;i < n;i++) {
        cin>>a[i];
    }

    for(int i = 1;i < n;i++) {
        a[i] = min(a[i],a[i-1] * 2);
    }

    for(int i = n-2;i >= 0;i--) {
        a[i] = min(a[i],a[i+1]);
    }

    for(int i = n;i < 31;i++) {
        a[i] = a[i-1] << 1;
    }

    ll res = 0;
    for(int i = 0;i < 31;i++) {
        if(res > a[i]) res = a[i];
        if(sum & (1 << i) ) res += a[i];
    }

    cout<<res<<endl;

    return 0;
}
