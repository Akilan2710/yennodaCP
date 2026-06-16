#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,f=1;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            a[i]--;
        }
        vector<vector<bool>> able(n, vector<bool>(n));
        for(int i=0;i<n;i++){
            vector<bool> us(n);
            int mn=a[i], ma=a[i];
            for(int j=i;j<n;j++){
                if(us[a[j]]){
                    break;
                }
                us[a[j]]=1;
                mn=min(mn, a[j]);
                ma=max(ma, a[j]);
                if(ma-mn==(j-i)){
                    able[mn][ma]=true;
                }
            }
        }
        for(int ans=n/2;ans>0;ans--){
            for(int i=0;i+2*ans<=n;i++){
                if(able[i][i+ans-1] && able[i+ans][i+2*ans-1]){
                    cout << ans << "\n";
                    f=0;
                    break;
                }
            }
            if(!f) break;
        }
        if(f) cout << "0\n";
    }
    return 0;
}