#include <bits/stdc++.h>
using namespace std;
using ll =long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;
        ll cur = 0;
        bool ok = true;
        for (ll i = 0; i < n; ++i) {
            cur += a[i];
            ll need = (i + 1) * (i + 2) / 2;
            if (cur < need) {
                ok = false;
            }
        }
        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}