#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,c=0;
        cin >> n;
        for(int i=1;i<=n;i++){
            int x;
            cin >> x;
            if(x<=i){
                c++;
            }
        }
        cout << c << "\n";
    }
    return 0;
}