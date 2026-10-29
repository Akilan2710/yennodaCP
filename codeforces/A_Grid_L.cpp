#include <bits/stdc++.h>
#define int long long
using namespace std;
 
void solve(){
    int p, q;
    cin >> p >> q;
 
    int t = p + 2 * q;
    int k = 2 * t + 1;
 
    for(int i=sqrt(k);i>=3;--i){
        if(k%i==0){
            if(abs((i-1)/2 - (k/i-1)/2)<=p){
                cout << (i-1)/2 << " " << (k/i-1)/2 << "\n";
                return;
            }
        }
    }
    cout << -1 << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}