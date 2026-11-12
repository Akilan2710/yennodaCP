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
        cin >> n;
        string s;
        cin >> s;
        int c=0;
        if(s[0]=='B') c++;
        for(int i=1;i<n;i++) if(s[i]==s[i-1]) c++;
        cout << c << "\n";
    }
    return 0;
}