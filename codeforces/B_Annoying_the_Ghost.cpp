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
        vector<int> a(n),c(n);
        set<int> s;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        int f=1;  
        for(int i=0;i<n;i++){
            auto j=s.lower_bound(a[i]);
            if(j==s.end()){
                f=0;
                break;
            }
            else{
                c[i]=*j;
                s.erase(j);
            }
        }
        if(!f){
            cout << "-1\n";
        }
        else{
            int ans=0;
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    if(c[j]<c[i]){
                        ans++;
                    }
                }
            }
            cout <<ans<< "\n";
        }
    }
    return 0;
}