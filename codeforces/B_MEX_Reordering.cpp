#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a0=0,a1=0;
        cin >> n;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x==1){
                a1++;
            }
            else if(x==0){
                a0++;
            }
        }
        if(!a0){
            cout << "NO\n";
        }
        else if(a0==1){
            cout << "YES\n";
        }
        else if(!a1){
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}