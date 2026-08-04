#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        int f=1,c1=0,c2=0;
        cin >> s;
        if(s[0]=='<'){
            c1++;
        }
        if(s[0]=='>'){
            c2++;
        }
        for(int i=1;i<s.size();i++){
            if(s[i-1]!='<' && s[i]!='>' && f){
                cout << "-1\n";
                f=0;
            }
            if(s[i]=='<'){
                c1++;
            }
            if(s[i]=='>'){
                c2++;
            }
        }
        if(f){
            cout << (s.size()-min(c1,c2)) << "\n";
        }
    }
    return 0;
}