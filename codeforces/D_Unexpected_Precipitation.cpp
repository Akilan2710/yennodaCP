#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        ll ma=0,mn=0;
        for(int i=n-1;i>-1;i--){
            ll tp=ma;
            ma=max(a[i]-b[i]+ma,mn);
            mn=min(b[i]-a[i]+mn,tp);
        }
        if(ma>0) cout << "Sunny\n";
        else if(ma<0) cout << "Aubrey\n";
        else cout << "Draw\n";
    }
    return 0;
}