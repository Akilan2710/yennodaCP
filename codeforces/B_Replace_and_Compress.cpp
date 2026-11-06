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
        int a=1;
        if(s.find("010")!=string::npos || s.find("101")!=string::npos) a++;
        if(s.find("000")!=string::npos || s.find("111")!=string::npos) a++;
        cout << a << "\n";
    }
    return 0;
}