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
        string s;
        cin >> n >> s;
        vector<int> a(26,0);
        int l=0,r=n-1;
        while(l<r){
            if(s[l]!=s[r]){
                int a1=min(s[l],s[r])-'a',a2=max(s[l],s[r])-'a';
                for(int i=a1;i<a2;i++)a[i]=1;
            }
            l++;r--;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            ans+=a[i];
        }
        cout << ans << "\n";
    }
    return 0;
}