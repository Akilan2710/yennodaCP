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
        cin >> a[0];
        int k = 0;
        for(int i = 1; i < n; i++){
            cin >> a[i];
            k = max(k, a[i-1]-a[i]);
        }
        bool flag = true;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                a[i]+=k;
                if(a[i]<a[i-1]){
                    cout << "NO\n";
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout << "YES\n";
        }
    }
    return 0;
}