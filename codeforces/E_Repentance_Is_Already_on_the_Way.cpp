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
        vector<int> a(n),b(n);
        for(auto &x:a) cin >> x;
        for(auto &x:b) cin >> x;
        int c=1+(a[n-1]==b[n-1]);
        for(int i=0;i<n-1;i++){
            c+=2+(a[i]==b[i+1])+(a[i+1]==b[i]);
        }
        int ans=c;
        for(int i=0;i<n-1;i++){
            c+=(a[i]==b[i])-(a[i]==b[i+1]);
            ans=max(ans,c);
        }
        cout << ans << "\n";
    }
    return 0;
}