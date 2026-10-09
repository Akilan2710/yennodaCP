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
        vector<int> vs(n),ve(n);
        for(int i=0;i<n;i++){
            cin >> vs[i] >> ve[i];
        }
        int l=0,r=1000000000;
        while(l<r){
            int m=l+(r-l)/2;
            int ll=0,rr=0,f=1;
            for(int i=0;i<n;i++){
                ll=max(vs[i],ll-m);
                rr=min(ve[i],rr+m);
                if(ll>rr){
                    f=0;break;
                }
            }
            if(f==1){
                r=m;
            }
            else l=m+1;
        }
        cout << l << "\n";
    }
    return 0;
}