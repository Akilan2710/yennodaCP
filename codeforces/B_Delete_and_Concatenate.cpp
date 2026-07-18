#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            a[i] -= c;
        }
        for(int i = 0; i < n / 2; i++){
            if(a[i]<0){
                a[i]=0;
            }
        }

        cout << accumulate(a.begin(), a.end(), 0LL) << "\n";
    }
    return 0;
}