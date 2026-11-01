#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        if(n-m!=3){
            cout << "NO\n";
        }
        else{
            unordered_map<char,int> a1,b1;
            a1['s']=-1;a1['i']=-1;a1['x']=-1;
            b1['s']=0;b1['i']=0;b1['x']=0;
            for(char c:a) a1[c]++;
            for(char c:b) b1[c]++;
            if(a1==b1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}