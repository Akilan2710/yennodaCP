#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        string s;
        cin >> n >> k >> s;
        int x=0;
        for(char c:s) if(c=='0') x++;
        x=min(max(x,n-x)+k,n);
        int y=n-x;
        ll a=1LL*x*(x+1)/2+1LL*y*(y+1)/2+1;
        cout << a << '\n';
    }
    return 0;
}