#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k,c=1,f=1;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        for(int i=n-2;i>=0;i--){
            if(v[i]==v[i+1]){
                c++;
            }
            else if(c%2==0){
                cout << "YES\n";
                f=0;
                break;
            }
            else if(v[i+1]-v[i]<=k){
                cout << "YES\n";
                f=0;
                break;
            }
            else{
                c=1;
            }
        }
        if(c%2==0 && f){
            cout << "YES\n";
        }
        else if(f){
            cout << "NO\n";
        }
    }
    return 0;
}