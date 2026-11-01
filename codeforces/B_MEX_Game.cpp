#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            ++cnt[a];
        }
        for (int x = 0; x <= n; ++x) {
            if (cnt[x] < 2 * k) {
                cout << (cnt[x] == 2 * k - 1 ? "YES\n" : "NO\n");
                break;
            }
        }
    }
    return 0;
}