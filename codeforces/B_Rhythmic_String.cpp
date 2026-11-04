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
        int m=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(i>0 && a[i]==a[i-1]) continue;
            if((n-i)<=m) break;
            int c=0;
            for(int j=0;j<n;j++){
                if(a[j]%a[i]==0) c++;
            }
            m=max(m,c);
        }
        cout << n-m << "\n";
    }
    return 0;
}