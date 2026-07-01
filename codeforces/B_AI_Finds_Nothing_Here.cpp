#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m,r,c,a=1,mod=998244353,base=2;
        cin >> n >> m >> r >> c;
        n=n*m-(n-r+1)*(m-c+1);
        while (n > 0) {
            if (n % 2 == 1) a = (a * base) % mod;
            base = (base * base) % mod;
            n /= 2;
        }
        cout << a << "\n";
    }
    return 0;
}