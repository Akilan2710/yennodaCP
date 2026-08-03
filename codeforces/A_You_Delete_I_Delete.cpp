#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int f1=1,f2=1;
        string s,a;
        cin >> s;
        for(char c:s){
            if(c=='0'&&f1){
                f1=0;
                continue;
            }
            if(c=='1'&&f2){
                f2=0;
                continue;
            }
            a+=c;
        }
        cout << a << "\n";
    }
    return 0;
}