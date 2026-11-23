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
        int f=0,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
                f=1;
                break;
            }
            if(s[i]=='.') c++;
        }
        if(f) c=2;
        cout << c << "\n";
    }
    return 0;
}