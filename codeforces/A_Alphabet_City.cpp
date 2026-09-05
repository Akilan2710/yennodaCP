#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,m; cin >> n >> m;
    vector<string> s(n);
    for (auto &x: s) cin >> x;
    vector<ll> fm(26), f(26);
    for (auto &x: s) for (auto &y: x) {fm[y - 'A']++; f[y-'A']++;}
    for (ll l = 0; l < n; l++) {
        vector<ll> iss(26);
        for (auto &x: s[l]) iss[x - 'A']++;
        for (ll i = 0; i < 26; i++) {fm[i] -= iss[i]; f[i] -= iss[i];}
        ll rh = 0;
        for (ll i = 0; i < 26; i++) fm[i] *= m;
        for (ll i = 0; i < 26; i++) {
            if (iss[i] > fm[i]) {
                cout << -1 << " ";
                rh = 1;
                break;
            }
        }
        if (rh) {
            for (ll i = 0; i < 26; i++) {
                fm[i] /= m;
                fm[i] += iss[i];
                f[i] += iss[i];
            }
            continue;
        }
        for (ll i = 0; i < 26; i++) {
            fm[i] -= iss[i];
        }
        ll c = 1e18;
        for (ll i = 0; i < 26; i++) {
            if (!f[i]) continue;
            c = min(c, fm[i] / f[i]);
        }
        for (ll i = 0; i < 26; i++) fm[i] += iss[i];
        for (ll i = 0; i < 26; i++) fm[i] /= m;
        for (ll i = 0; i < 26; i++) {fm[i] += iss[i]; f[i] += iss[i];}
        cout << c << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}