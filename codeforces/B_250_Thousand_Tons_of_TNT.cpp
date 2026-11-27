#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        ll ans=-1;
        for(int i=1;i<=n;i++){
        if(n%i==0){
            ll ma=-1e18,mn=1e18;
            for(int j=0;j<n;j+=i){
                ll s=0;
                for(int k=j;k<j+i;k++) {
                    s+=a[k];
                }
                ma=max(ma,s);
                mn=min(mn,s);
            }
            ans=max(ans,ma-mn);
        }
    }
    cout << ans << '\n';
    }
    return 0;
}