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
        int c1=0,c2=0,a;
        for(char ch: s){
            if(ch=='1' || ch=='3'){
                c1++;
            }
        }
        a=c1+c2;
        for(char ch: s){
            if(ch=='2'){
                c2++;
            }
            if(ch=='1' || ch=='3'){
                c1--;
            }
            a=max(a, c1+c2);
        }
        cout << (s.size()-a) << "\n";
    }
    return 0;
}