#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int n=x+y+z;
        if(max(x,max(y,z))==x) for(int i=0;i<n;i++) cout << "P";
        else if(max(x,max(y,z))==y) for(int i=0;i<n;i++) cout << "R";
        else for(int i=0;i<n;i++) cout << "S";
        cout << "\n";
    }
    return 0;
}