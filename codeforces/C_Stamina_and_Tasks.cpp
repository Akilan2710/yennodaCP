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
        double ans=0,tem;
        vector<double> c(n),p(n);
        for(int i=0;i<n;i++){
            cin >> c[i] >> p[i];
        }
        for(int i=n-1;i>=0;i--){
            tem=c[i]+ans*(1-p[i]/100);
            ans=max(tem,ans);
        }
        cout << fixed << setprecision(10) << ans << "\n";
    }
    return 0;
}