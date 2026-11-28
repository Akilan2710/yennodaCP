#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a;
        cin >> a;
        if(a%2) cout << "Yes\n";
        else{
            if(a%4) cout << "No\n";
            else cout << "Yes\n";
        }
    }
    return 0;
}