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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int s=0,m=0;
        for(int i=0;i<n;i++){
            int t;
            cin >> t;
            s+=max(a[i],t);
            a[i]=min(a[i],t);
            m=max(a[i],m);
        }
        cout << (s+m) <<"\n";  
    }
    return 0;
}