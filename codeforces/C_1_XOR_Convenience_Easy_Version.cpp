#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " ";
        for (int i = 2; i <= n-2; i += 2) {
            cout << i + 1 << " " << i << " ";
        }
        cout << 1;
    }else {
        cout << n - 1 << " ";
        for (int i = 2; i <= n-3; i += 2) {
            cout << i+1 << " " << i << " ";
        }
        cout << n << " " << 1;
    }
    cout << '\n';
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