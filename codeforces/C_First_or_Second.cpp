#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n); for(auto& x : a) cin >> x;
    vector<long long> pf(n + 1), sf(n);
    for(int i = 1; i < n; i++) pf[i + 1] = pf[i] + abs(a[i]);
    for(int i = n - 1; i >= 1; i--) sf[i - 1] = sf[i] - a[i];
 
    long long ans = sf[0];
    for(int i = 1; i < n; i++) ans = max(ans, a[0] + pf[i] + sf[i]);
    cout << ans << '\n';
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