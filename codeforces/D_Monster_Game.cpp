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
        int n;
        cin >> n;
        vector<int> a(n+1),b(n+1);
        a[0]=0;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        sort(a.begin()+1,a.end(),greater<>());
        int s=0;
        b[0]=0;
        for(int i=1;i<=n;i++){
            int x;
            cin >> x;
            s+=x;
            b[i]=s;
        }
        int ans=0,l=1;
        for(int i=1;i<=n;i++){
            while(l<=n && b[l]<=i){
                ans=max(ans,a[i]*l);
                l++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}