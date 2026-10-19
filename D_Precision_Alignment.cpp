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
        int n;
        int k;
        cin >> n >> k;
        vector<int> S(n), E(n);
        vector<int> dead(n);
        const int BIG = numeric_limits<int>::max() / 4;
        int lo = BIG, cap = BIG;
        vector<int> A(n), B(n), C(n);
        for (int i = 0; i < n; i++) cin >> A[i] >> B[i] >> C[i];
        for (int i = 0; i < n; i++) {
            int a = A[i], b = B[i], c = C[i];
            S[i] = a + b + c;
            dead[i] = (a == b && b == c);
            E[i] = (a <= b && b <= c) ? min(b - a, c - b) + 1 : 0LL;
            lo = min(lo, S[i]);
            if (dead[i]) cap = min(cap, S[i]);
        }
        int hi = min(cap, lo + k) + 1;
        auto is_ok = [&](int m){
            int total = 0;
            for (int i = 0; i < n; i++) {
                if (S[i] >= m) continue;
                if (dead[i]) return 0;
                total += (m - S[i]) + 2 * E[i];
                if (total > k) return 0;
            }
            return 1;
        };

        while (hi - lo > 1) {
            int mid = (hi + lo) / 2;
            if (is_ok(mid)) lo = mid;
            else hi = mid;
        }
        cout << lo << '\n';
    }
    return 0;
}