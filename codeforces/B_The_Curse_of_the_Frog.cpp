#include <bits/stdc++.h>
using namespace std;
#define  int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,r;
        cin >> n >> r;
        int m=0,s=0;
        for(int i=0;i<n;i++){
            int a,b,c;
            cin >> a >> b >> c;
            m=max(m,(a*b)-c);
            s+=a*(b-1);
        }
        r=r-s;
        if(r<=0){
            cout << "0\n";
        }
        else{
            if(m){
                cout << (r+m-1)/m << '\n';
            }
            else{
                cout << "-1\n";
            }
        }
    }
    return 0;
}