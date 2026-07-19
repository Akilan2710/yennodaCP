#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k,m;
        cin >> n >> k >> m;
        if(m<k){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for(int i=1;i<n;i++){
                cout << m+1 << " ";
            }
            cout << m-k+1 << "\n";
        }
    }
    return 0;
}