#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        map<pair<int,int>,int> cnt;
        int ans = 0;
        for(int e:a){
            int xx = e%x, yy = e%y;
            ans += cnt[{(x - xx) % x, yy}];
            cnt[{xx, yy}] = cnt[{xx, yy}] + 1;
        }
    cout << ans << "\n";
    }
    return 0;
}
