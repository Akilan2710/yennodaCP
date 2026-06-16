#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m,a,t,c=1,f=0;
        cin >> n >> m;
        cin >> a;
        t=a;
        for(int i=1;i<n;i++){
            cin >> a;
            if(a==t){
                c++;
            }
            else{
                t=a;
                c=1;
            }
            if(c>=m && !f){
                cout << "NO" << "\n";
                f=1;
            }
        }
        if(!f){
            cout << "YES" << "\n";
        }
    }
    return 0;
}