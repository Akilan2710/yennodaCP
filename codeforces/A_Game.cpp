#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int k,a,b,alice=0;
        cin >> k;
        for(int i=0;i<2;i++){
            cin >> a >> b;
            alice+=a-b;
        }
        if(alice>=k){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}