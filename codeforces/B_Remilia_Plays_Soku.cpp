#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,x1,x2,k;
        cin >> n >> x1 >> x2 >> k;
        if(n<4){
            cout << "1\n";
        }
        else{
            cout << (min(abs(x1-x2),n-abs(x1-x2))+k) << "\n";
        }
    }
    return 0;
}