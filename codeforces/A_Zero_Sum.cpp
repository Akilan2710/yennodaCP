#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a1=0,a2=0;
        cin >> n;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            x==1?a1++:a2++;
        }
        if(n%2==1){
            cout << "NO\n";
        }
        else{
            if((n/2-a1)%2==0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}