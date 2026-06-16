#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k,f=1;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(k,0);
        for(int i=0;i<n;i++){
            v[i%k]+=s[i]-'0';
        }
        for(int i=0;i<k;i++){
            if(v[i]%2){
                cout << "NO\n";
                f=0;
                break;
            }
        }
        if(f){
            cout << "YES\n";
        }
    }
    return 0;
}