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
        unordered_map<int,vector<int>> m;
        for(int i=2;i<=n;i++){
            int x;
            cin >> x;
            m[x].push_back(i);
        }
        int ans=n;
        for(auto i:m){
            ans+=min(1,(int)i.second.size()-1);
            int c=0;
            for(auto j:i.second){
                if(m.find(j)!=m.end()){
                    c++;
                }
            }
            ans+=max(0,c-1);
        }
        cout << ans << "\n";
    }
    return 0;
}