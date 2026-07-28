#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(k>n-2){
            cout << "-1\n";
        }
        else{
            int c0=(n+1)/2,c1=n/2,c=n-2-k;
            string s="";
            while(c>1){
                c0--;c1--;
                c-=2;
                s+="01";
            }
            if(c>0){
                c0--;
                s+="0";
            }
            while(c0--){
                cout << "0";
            }
            while(c1--){
                cout << "1";
            }
            cout << s << "\n";

        }
    }
    return 0;
}