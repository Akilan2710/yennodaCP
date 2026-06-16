#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       long long a=1;
       for(int i=1;i<=n;i++){
        cout << a << " ";
        a*=2;
       } 
       cout << "\n";
    }
    return 0;
}