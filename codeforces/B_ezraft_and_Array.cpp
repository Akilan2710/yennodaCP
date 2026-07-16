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
        if(n==1){
            cout << "1\n";
        }
        else if(n==2){
            cout << "-1\n";
        }
        else{
            int c=12;
            cout <<"2 4 6 ";
            for(int i=3;i<n;i++){
                cout << c << " ";
                c*=2;
            }
            cout << "\n";
        }
    }
    return 0;
}