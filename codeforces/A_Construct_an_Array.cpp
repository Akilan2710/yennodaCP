#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a=1;
        cin >> n;
        while(n--){
            cout << a << " ";
            a+=2;
        }
        cout << "\n";
    }
    return 0;
}