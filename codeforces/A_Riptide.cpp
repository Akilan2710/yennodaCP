#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(), a.end());
        if(a[0]==a[1] || a[1]==a[2] ){
            cout <<"0\n";
        }
        else{
            cout << min(a[2]-a[1],a[1]-a[0]) << "\n";
        }
    }
    return 0;
}