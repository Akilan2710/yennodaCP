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
        int n;
        cin >> n;
        vector<int> a(n);
        cin >> a[0];
        for(int i=1;i<n;i++){
            cin >> a[i];
            if(i%2==1) a[i]*=-1;
        }
        sort(a.begin(), a.end());
        int ans=0;
        for(int i=0;i<n/2;i++) ans-=a[i];
        for(int i=n/2;i<n;i++) ans+=a[i];
        cout << ans << "\n";
    }
    return 0;
}