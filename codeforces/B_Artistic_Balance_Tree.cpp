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
        int n,m,sum=0;
        cin >> n >> m;
        vector<multiset<int>> a(2);
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            sum+=x;
            a[i%2].insert(x);
        }
        for(int i=0;i<m;i++){
            int x;
            cin >> x;
            if(x%2==1){
                sum-=*a[0].rbegin();
                a[0].erase(prev(a[0].end()));
                a[0].insert(0);
            }
            if(x%2==0){
                sum-=*a[1].rbegin();
                a[1].erase(prev(a[1].end()));
                a[1].insert(0);
            }
        }
        cout << sum << "\n";
    }
    return 0;
}