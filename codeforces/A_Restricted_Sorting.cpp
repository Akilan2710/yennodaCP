#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b = a;
    sort(b.begin(), b.end());
    if (a == b) {
        cout << -1 << "\n";
        return;
    }
    int b_min = b.front(); 
    int b_max = b.back();
    
    int min_val = INT_MAX;

    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            int current_max = max(a[i] - b_min, b_max - a[i]);
            if (current_max < min_val) {
                min_val = current_max;
            }
        }
    }
    
    cout << min_val << "\n";
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