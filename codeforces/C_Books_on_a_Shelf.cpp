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
        map<int,int> a;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a[x]++;
        }
        int c1=0;
        vector<int> l,r;
        for(auto& [h,c]:a){
            l.push_back(h);
            c1++;
            if(c>1) c1++;
            for(int i=1;i<c;i++) r.push_back(h);
        }
        cout << c1 << "\n";
        for(int i:l) cout << i << " ";
        reverse(r.begin(),r.end());
        for(int i:r) cout << i << " ";
        cout << "\n";
    }
    return 0;
}