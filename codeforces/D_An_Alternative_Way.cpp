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
        int n,f=1;
        cin >> n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        cin >> b[0];
        b[0]-=a[0];
        if(b[0]<0){
            cout << "NO\n";
            f=0;
        }
        for(int i=1;i<n;i++){
            cin >> b[i];
            b[i]+=b[i-1]-a[i];
            if(b[i]<0 && f){
                cout << "NO\n";
                f=0;
            }
        }
        if(f){
            cout << "YES\n";
        }
    }
    return 0;
}