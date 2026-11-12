#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        vector<int> a(3);
        for(int i=0;i<3;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int f=1;
        for(int i=1;i<3;i++){
            if(a[i]-a[i-1]!=1) f=0;
        }
        cout << (f==1?"YES\n":"NO\n");
    }
    return 0;
}