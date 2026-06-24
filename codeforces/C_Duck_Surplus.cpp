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
        int c=0;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            if(a>c){
                c=a;
            }
            else if(a<c){
                c+=a;
            }
        }
        cout << c << "\n";
    }
    return 0;
}