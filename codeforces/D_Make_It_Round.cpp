#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m,c1=0,c2=0;
        cin >> n >> m;
        int i=n,k=1;
        while(i>0 && i%2==0){i/=2;c1++;}
        while(i>0 && i%5==0){i/=5;c2++;}
        while(c1<c2 && k*2<=m){c1++;k*=2;}
        while(c1>c2 && k*5<=m){c2++;k*=5;}
        while(k*10<=m) k*=10;
        k*=m/k;
        cout << n*k << '\n';
    }
    return 0;
}