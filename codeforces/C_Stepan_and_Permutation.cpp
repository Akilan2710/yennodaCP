#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
         int n, x, y;
        cin >> n >> x >> y;
        vector<int> p(n);
        for (auto &val : p)
            cin >> val;
        int g = gcd(x, y);
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if ((p[i] % g) != ((i + 1) % g)) {
                ok = false;
                break;
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