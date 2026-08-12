#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        unordered_set<int> s;
        int c=0;
        for(int i=0;i<n;i++){
            cin >> b[i];
            if(b[i]>0){
                c++;
                s.insert(b[i]);
            }
        }
        if(s.size()!=c){
            cout << "NO\n";
            continue;
        }
        else{
            int f=1;
            for(int i=0;i<(n-k);i++){
                if(b[i]==-1){
                    if(s.find(a[i])!=s.end()){
                        f=0;
                        break;
                    }
                }
                else if(a[i]!=b[i]){
                    f=0;
                    break;
                }
            }
            if(f){
                k=max(n-k,k);
                for(int i=k;i<n;i++){
                    if(b[i]==-1){
                        if(s.find(a[i])!=s.end()){
                            f=0;
                            break;
                        }
                    }
                    else if(a[i]!=b[i]){
                        f=0;
                        break;
                    }
                }
            }
            if(f){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}