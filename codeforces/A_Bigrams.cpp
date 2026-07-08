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
            int c=0,d=0;
            for(int i=0;i<n;i++){
                int a;
                cin >> a;
                c+=a>1?1:0;
                d+=a>2?1:0;
            }
            cout << (c>1?"YES\n":(d>0?"YES\n":"NO\n"));
    }
    return 0;
}