#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll t,u,h,n=0;
        cin >> t >> h >> u;
        ll c=min(t,u);
        t-=c;u-=c;
        n+=4*c;
        c=min(t/2,h);
        h-=c;t-=2*c;
        n+=c*7;
        c=min(t,h);
        t-=c;h-=c;
        n+=c*5;
        n+=3*(u+h);
        if(t>0){
            n+=1+2*t;
        }
        cout << n << "\n";
    }
    return 0;
}