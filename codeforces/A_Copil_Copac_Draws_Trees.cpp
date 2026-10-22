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
        unordered_set<int> s;
        cin >> n;
        s.insert(1);
        int c=1,l=0;
        vector<pair<int,int>> e;
        for(int i=0;i<n-1;i++){
            int x,y;
            cin >> x >> y;
            if(s.find(x)!=s.end() || s.find(y)!=s.end()){
                s.insert(x);s.insert(y);
                l++;
            }
            else e.push_back({x,y});
        }
        while(!e.empty()){
            c++;
            vector<pair<int,int>> f;
            for(const auto& [x,y]:e){
                if(s.find(x)!=s.end() || s.find(y)!=s.end()){
                    s.insert(x);s.insert(y);
                    l++;
                }
                else f.push_back({x,y});
            }
            e=f;
        }
        cout << c << '\n';
    }
    return 0;
}