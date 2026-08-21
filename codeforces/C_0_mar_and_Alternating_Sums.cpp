#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    if (cin >> t) {
        while(t--) {
            int n;
            cin >> n;
            map<int, int> freq;
            int minus_one_count = 0;
            for (int i = 0; i < n; ++i) {
                int val;
                cin >> val;
                if (val == -1) {
                    minus_one_count++;
                } else {
                    freq[val]++;
                }
            }
            const ll MOD = 1000000007;
            int d = freq.size();
            int l = 0;
            for (auto const& [v, count] : freq) {
                if (freq.count(v + 1)) {
                    l++;
                }
            }
            ll ans = 0;
            if (minus_one_count == 0) {
                ans = power(2, n - d, MOD);
            } else {
                // Since -1 is present, it counts as an additional unique element group.
                // The exponent becomes n - d - 1.
                ll base_combinations = power(2, n - d - 1, MOD);
                ll multiplier = (l + 1) % MOD;
                ans = (base_combinations * multiplier) % MOD;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}