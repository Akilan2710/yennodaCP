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
        int n,k,p;
        cin >> n >> k >> p;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        int s=0,r=0;
        for(int i=0;i<n;i++){
            s+=a[i];
            if((i+1)%k==0){
                r+=max(s,p);
                s=0;
            }
        }
        if(n%k!=0) r+=s;
        cout << r << "\n";
    }
    return 0;
}