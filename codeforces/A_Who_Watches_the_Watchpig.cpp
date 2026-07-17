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
        string s;
        cin >> s;
        if(k * 2 > n) {
            cout << -1 << endl;
            continue;
        }
        int ans = 0;
        for(int i = 0; i < k; i++){
            ans += (s[i] != 'R') + (s[n - i - 1] != 'L');
        }
        cout << ans << endl;
    }
    return 0;
}