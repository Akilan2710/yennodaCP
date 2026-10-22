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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int q;
        cin >> q;
        while(q--){
            int l,k;
            cin >> l >> k;
            if(a[l-1]<k){
                cout << "-1 ";
                continue;
            }
            int r=l,res=a[l-1];
            while(r<n && (res&a[r])>=k){
                res=res&a[r];
                r++;
            }
            cout << r << " ";
        }
        cout << "\n";
    }
    return 0;
}