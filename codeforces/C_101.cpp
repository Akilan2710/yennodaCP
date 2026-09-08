#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n); for (auto &x: vec) cin >> x;
        
        for (int i = 0; i < n; i++) {
            if (vec[i] == -1) vec[i] = 1;
            if (vec[i] == 1) break;
        }
        
        for (int i = n-1; i >= 0; i--) {
            if (vec[i] == -1) vec[i] = 1;
            if (vec[i] == 1) break;
        }
        
        
        for (auto &x: vec) cout << max(x, 0) << " ";
        cout << "\n";
    }
    return 0;
}