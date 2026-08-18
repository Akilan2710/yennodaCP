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
        int n,m,mi;
        cin >> n >> m;
        vector<int> a(n);
        cin >> a[0];
        mi=a[0];
        for(int i=1;i<n;i++){
            int x;
            cin >> x;
            mi=min(x,mi);
            a[i]=mi;
        }
        vector<vector<int>> b(n+1,vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> b[i][j];
            }
        }
        b[n]=vector<int> (m,0);
        int ans=m;
        for(int i=n-1;i>=0;i--){
            vector<int> c;
            c.reserve(2 * m);
            c.insert(c.end(), b[i+1].begin(), b[i+1].end());
            c.insert(c.end(), b[i].begin(), b[i].end());
            partial_sort(c.begin(),c.begin()+m,c.end(),greater<int>());
            c.resize(m);
            b[i]=c;
            int s=0;
            for(int j=0;j<m;j++){
                s+=b[i][j];
                if(s>=a[i]){
                    ans=min(ans,j+1);
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}