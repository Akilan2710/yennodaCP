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
        int a=0,c=1;
        while(n>0 && c<=n){
            int b=min(k,n/c);
            a+=b;
            n-=b*c;
            c*=2;
        }
        cout << a << "\n";
    }
    return 0;
}