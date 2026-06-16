#include <bits/stdc++.h>
using namespace std;

#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a.insert(x);
        }
        vector<int> v;
        v.push_back(*a.rbegin());
        v.insert(v.end(),a.begin(),a.end());
        v.pop_back();
        unordered_set<int> s;
        int mex=0,m=0,ans=(v[0])*n;
        for(int i: v){
            s.insert(i);
            while(s.count(mex)){
                mex++;
            }
            m+=mex;
            n--;
        }
    cout << (m+ans+n*mex) << "\n";
    }
    return 0;
}