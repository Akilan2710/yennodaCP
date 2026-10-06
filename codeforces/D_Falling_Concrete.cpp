#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    set<int> s;
    for(int i=0; i<n;i++){
        int x;
        cin >> x;
        s.insert(x-i);
    }
    int a=0,l=0,c=-1e9;
    for(int i:s){
        if(i!=c+1){
            a=max(a,l); 
            l=0;
        }
        l++;
        c=i;
    }
    cout << max(a,l) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}