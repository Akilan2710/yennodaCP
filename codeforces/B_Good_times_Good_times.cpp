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
        cin >> s;
        int l=s.size(),a=1;
        while(l--){
            a*=10;
        }
        cout << ++a << "\n";
    }
    return 0;
}