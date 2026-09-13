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
        vector<int> a(2);
        cin >> s;
        for(char c:s){
            a[c-'0']++;
        }
        for(char c:s){
            if(a[1-(c-'0')]>0){
                a[1-(c-'0')]--;
            }
            else{
                break;
            }
        }
        cout << (a[0]+a[1]) << "\n";
    }
    return 0;
}