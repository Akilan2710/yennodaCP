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
        bool d=true;
        if(n % 2 == 1){
            if(s[0]=='b'){
                d=false;
            }
            else{
                for(int i=1; i<=(n/2); i++){
                    if(s[2*i-1] != s[2*i]){
                        continue;
                    }
                    else if(s[2*i]=='?'){
                        continue;
                    }
                    else{
                        d=false;
                        break;
                    }
                }
            }
        }
        else{
            for(int i=0; i<(n/2); i++){
                if(s[2*i] != s[2*i+1]){
                    continue;
                }
                else if(s[2*i]=='?'){
                    continue;
                }
                else{
                    d=false;
                    break;
                }
            }
        }
        if(d){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}