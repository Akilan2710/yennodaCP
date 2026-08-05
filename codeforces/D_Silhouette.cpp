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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        b=a;
        sort(a.begin(),a.end());
        unordered_map<int,int> mp;
        int c=1,f=1,p=0;
        if(a[0]!=0){
            cout << "-1\n";
            continue;
        }
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                c++;
            }
            else{
                if((a[i]-a[i-1])%c!=0){
                    cout << "-1\n";
                    f=0;
                    break;
                }
                else if((a[i]-a[i-1])/c<=p){
                    cout << "-1\n";
                    f=0;
                    break;
                }
                mp[a[i-1]]=(a[i]-a[i-1])/c;
                p=mp[a[i-1]];
                c=1;
            }
        }
        mp[a[n-1]]=a[0]==a[n-1]?1:(p+1);
        if(f){
            for(int i=0;i<n;i++){
                cout << mp[b[i]] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}