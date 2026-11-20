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
        if(n<4) cout << "-1\n";
        else{
            cout << "4 3 2 1 ";
            for(int i=5;i<=n;i++) cout << i << " ";
            cout << '\n';
        }
    }
    return 0;
}