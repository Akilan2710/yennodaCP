#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,c=0,d=0;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            c^=a[i];
            d+=a[i]>0?1:0;
        }
        if(d<2){
            cout << "0\n";
        }
        else if(c==0){
            cout << "1\n";
        }
        else{
            int ans=0;
            for(int i=0;i<n;i++){
                if((c^a[i])<a[i]){
                    ans++;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
