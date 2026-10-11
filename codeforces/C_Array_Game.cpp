#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        unordered_map<ll,int> f(n);
        vector<ll> a(n);
        bool fl=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            f[a[i]]++;
            if(f[a[i]]>1) fl=1;
        }
        if(k>2 || fl) cout << "0\n";
        else{
            sort(a.begin(),a.end());
            ll mi=a[0];
            for(int i=1;i<n;i++){
                mi=min(mi,a[i]-a[i-1]);
            }
            if(k==1) cout << mi << "\n";
            if(k==2){
                bool q=0;
                for(int i=0;i<n;i++){
                    for(int j=i;j<n;j++){
                        ll r=a[j]-a[i];
                        if(f.find(r)!=f.end()){
                            q=1;
                            break;
                        }
                        auto it = lower_bound(a.begin(), a.end(), r);
                        if(it != a.end()) mi=min(mi,abs(*it-r));
                        if(it != a.begin()) mi=min(mi,abs(*(it-1)-r));
                    }
                    if(q) break;
                }
                if(q) cout << "0\n";
                else cout << mi << "\n";
            }
        }
    }
    return 0;
}