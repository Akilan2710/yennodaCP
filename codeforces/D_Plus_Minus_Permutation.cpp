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
        ll n,x,y,c;
        cin >> n >> x >> y;
        ll a=n/lcm(x,y);
        x=n/x-a;
        y=n/y-a;
        c=n*(n+1)/2 - (n-x)*(n-x+1)/2 - y*(y+1)/2;
        cout << c << "\n";
    }
    return 0;
}