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
        int n,s=0;
        cin >> n;
        vector<int> c(n);
        for(int i = 0; i < n; i++){
            cin >> c[i];
            s+=c[i];
        }
        int ones = 0;
        int slots = 0;
        for(int x : c){
            if(x == 1){
                ones += 1;
            }
            else{
                slots += x / 2 - 1;
            }
        }
        if(ones == n - 1){
            slots += 1;
        }
        int wasted = max(0LL, ones - slots);
        if(s - wasted < 3){
            cout << 0 << "\n";
        }
        else{
            cout << s - wasted << "\n";
        }
    }
    return 0;
}