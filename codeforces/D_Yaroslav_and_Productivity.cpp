#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void I_love_feblokas();

int32_t main() {
    int32_t tc = 1;
    cin >> tc;
    while (tc-->0) {
        I_love_feblokas();
    }
    return 0;
}

void I_love_feblokas() {
    int n, m;
    ll ans = 0;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    b.push_back(0);
    sort(b.begin(), b.end());
    vector<ll> pref(n + 1);
    for (ll i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + a[i];
    }
    for (ll i = 1; i < b.size(); ++i) {
        ans += abs(pref[b[i]] - pref[b[i - 1]]);
    }
    ans += pref[n] - pref[b.back()];
    cout << ans << '\n';
    return;
}