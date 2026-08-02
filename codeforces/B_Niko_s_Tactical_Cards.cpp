#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e5 + 10;

int n;
int a[MAXN], b[MAXN];

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i) cin >> b[i];
        ll mx = 0, mn = 0;
        for (int i = 1; i <= n; ++i) {
            ll new_mx = max(mx - a[i], b[i] - mn);
            ll new_mn = min(mn - a[i], b[i] - mx);
            mx = new_mx, mn = new_mn;
        }
        cout << mx << endl;
    }
    return 0;
}