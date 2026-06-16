#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        if(n>=m){
            cout << "Alice\n";
        }
        else if(min(n/2,m/3)>=m-n){
            cout << "Bob\n";
        }
        else{
            cout << "Alice\n";
        }
    }
    return 0;
}