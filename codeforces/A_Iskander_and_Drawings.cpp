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
        int c=0,m=0;
        for(char ch:s){
            if(ch=='#'){
                c++;
            }
            else{
                m=max(m,c);
                c=0;
            }
        }
        cout << (max(m,c)+1)/2 << "\n";
    }
    return 0;
}