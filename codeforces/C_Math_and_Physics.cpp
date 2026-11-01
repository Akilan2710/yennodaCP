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
        int c=0,s=0;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            s+=a[i];
            if(a[i]==1) c++;
        }
        if(n==1) cout << s << "\n";
        else if(c==n) cout << "-1\n";
        else if(c+1==n && c>0){
            if(a[0]+a[n-1]>2) cout << (s-n+1) << "\n";
            else cout << s-1 << "\n";
        }
        else if(c+2==n && c>0){
            if(a[0]!=1 && a[n-1]!=1) cout << a[0]+a[n-1]-1 << "\n";
            else cout << s-1 << "\n";
        }
        else cout << s-1 << "\n";
    }
    return 0;
}