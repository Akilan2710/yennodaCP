#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        if(n%2==1){
            cout << "NO\n";
            continue;
        }
        int f=0;
        for(int i=1;i<n;i++){
            if(s[i-1]==s[i]){
                f=1;break;
            }
        }
        cout << (f==1?"YES\n":"NO\n");
    }
    return 0;
}