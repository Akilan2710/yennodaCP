#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,c=1;
        string s;
        cin >> n >> s;
        for(int i=1;i<n;i++){
            if(s[i-1]!=s[i]){
                c++;
            }
        }
        cout << (c==2?"2\n":"1\n");
    }
    return 0;
}