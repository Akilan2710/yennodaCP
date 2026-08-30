#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> a(m+1,0);
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a[x]++;
        }
        vector<int> s(m+2,0);
        for(int j=m;j>0;j--){
            s[j]=s[j+1]+a[j];
        }
        int ans=n;
        for(int i=1;i<=m;i++){
            int d=s[i];
            if((i*2)<=m){
                d+=a[2*i];
            }
            ans=max(ans,d);
        }
        cout << ans << "\n";
    }
    return 0;
}