#include <bits/stdc++.h>
using namespace std;

#define int long long
const int INF = 1'000'000'007;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> a(2);
        cin >> a[0] >> a[1];
        vector<int> p(n+1,INF);
        p[0]=0;
        for(int i=0;i<n;i++){
            p[i+1]=min(p[i+1],p[i]+(a[0][i]!=a[1][i]));
            if(i+1<n){
                p[i+2]=min(p[i+2],p[i]+(a[0][i]!=a[0][i+1])+(a[1][i+1]!=a[1][i]));
            }
        }
        cout << p[n] << "\n";
    }
    return 0;
}