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
        int x=1;
        while(2*x<=n) x*=2;
        vector<int> a;
        for(int i=0;i<x;i++) a.push_back(i);
        for(int i=x-1;i>=0;i--) a.push_back(i);
        for(int i=x;i<2*x;i++) a.push_back(i);
        for(int i=2*x-1;i>=x;i--) a.push_back(i);
        cout << (a.size()-1) << '\n';
        for(int i=1;i<a.size();i++) cout << (a[i]^a[i-1]) << " ";
        cout << "\n";
    }
    return 0;
}