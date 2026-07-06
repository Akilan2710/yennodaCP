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
        int n,c1=0,c2=0;
        cin >> n;
        vector<int> a(n),b(n),c(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for(int i=0;i<n;i++){
            cin >> c[i];
        }
        for(int i=0;i<n;i++){
            int f1=1,f2=1;
            for(int j=0;j<n;j++){
                if(a[(i+j)%n]>=b[j]){
                    f1=0;
                }
                if(b[(i+j)%n]>=c[j]){
                    f2=0;
                }
            }
            c1+=f1;
            c2+=f2;
        }
        cout << (c1*c2*n) << "\n";
    }
    return 0;
}