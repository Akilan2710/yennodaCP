#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(), a.end());
        int m1=0,m2=a[n-1]-a[0];
        for(int i=0;i<n/2;i++) m1+=a[n-1-i]-a[i];
        cout << m1 << " " << m2 << "\n";
    }
    return 0;
}