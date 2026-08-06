#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        map<ll,ll> freq;
        for(int i=0;i<n;i++){
            cin >> a[i];
            freq[a[i]]++;
        }
        if(!freq.count(0)){
            cout << "-1\n";
            continue;
        }
        map<ll,ll> mp;
        ll ps=0,pc=0,pv=0;
        bool f=true;
        for(auto [cs,cc]:freq){
            if(cs!=0){
                ll d=cs-ps;
                if(d%pc!=0){
                    f=0;
                    break;
                }
                ll u=d/pc;
                if(u<=pv){
                    f=0;
                    break;
                }
                mp[ps]=u;
                pv=u;
            }
            ps=cs;
            pc=cc;
        }
        if(!f){
            cout << "-1\n";
        }
        else{
            mp[ps]=pv+1;
            for(int i=0;i<n;i++){
                cout << mp[a[i]] << " \n"[i==n-1];
            }
        }
    }
    return 0;
}