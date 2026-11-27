#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int l,m,n;
        cin >> l >> m >> n;
        int b=lcm(n,m);
        cout << l/gcd(l,b) << "\n";
    }
    return 0;
}