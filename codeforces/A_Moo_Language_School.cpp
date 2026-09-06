#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k,c=0,i=0;
        cin >> n >> k;
        string s;
        cin >> s;
        while(i<n){
            int f=0;
            for(int j=i;j<i+k;j++){
                if(s[j]=='0') f=1;
            }
            if(!f) c++;
            i+=k;
        }
        cout << c << "\n";
    }
    return 0;
}