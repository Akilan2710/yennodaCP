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
        vector<int> a(n),b;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int x,tmp;
        cin >> x;
        tmp = x;
        b.push_back(tmp);
        for(int i=1;i<n;i++){
            cin >> x;
            if(x!=tmp){
                b.push_back(x);
                tmp = x;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]==b.back()){
                b.pop_back();
            }
        }
        if(b.empty()){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}