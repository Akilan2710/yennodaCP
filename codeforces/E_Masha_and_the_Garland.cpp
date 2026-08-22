#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> pref(n, 0);
    for (int i = 0; i < n-1; ++i) {
        pref[i + 1] = pref[i] + (s[i] == s[i + 1] ? 1 : 0);
    }
    for (int i = 0; i < q; ++i) {
        int l, r, k;
        cin >> l >> r >> k;
        if (l == r) {
            cout << "YES\n";
            continue;
        }
        int c = pref[r-1] - pref[l-1];
        int needed = (c + 1) / 2;
        if (needed <= k) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
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