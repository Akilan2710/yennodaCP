#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        int n=r-l+1;
        if (l == r) cout << 0 << "\n";
        else if (l > 0 || r < 0) cout << r - l << "\n";
        else if (abs(l + r) <= 1) cout << 0 << "\n";
        else cout << abs(l + r) - 1 << "\n";
    }
    return 0;
}