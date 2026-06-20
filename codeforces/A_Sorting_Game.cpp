#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,f=0,c=0;
        string s,a;
        cin >> n >> s;
        a=s;
        sort(a.begin(),a.end());
        if(a==s){
            cout << "Bob\n";
        }
        else{
            vector<int> ans;
            for(int i=0;i<n;i++){
                if(s[i]!=a[i]){
                    ans.push_back(i+1);
                }
            }
            cout << "Alice\n" << ans.size() << "\n";
            for(int i:ans){
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}