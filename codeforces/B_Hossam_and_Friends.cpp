#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> a(n+1,n);
        for(int i=0;i<m;i++){
            int x,y;
            cin >> x >> y;
            if(x>y) swap(x,y);
            a[x]=min(a[x],y-1); 
        }
        for(int i=n;i>0;i--){
            if(a[i-1]>a[i]) a[i-1]=a[i];
        }
        int r=n;
        for(int i=1;i<=n;i++){
            r+=a[i]-i;
        }
        cout << r << "\n";
    }
    return 0;
}