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
        cin >> n >> k;
        ll c=0;
        for(int i=0;i<n;i++){
            ll a;
            cin >> a;
            if(i%(k+1)==0) c+=a;
        }
        cout << (c%2==1?"Alice\n":"Bob\n");
    }
    return 0;
}