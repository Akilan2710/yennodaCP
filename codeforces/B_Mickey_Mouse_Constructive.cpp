#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,b,c=1;
        cin >> a >> b;
        for(int i=1;i<abs(a-b);i++){
            if((a-b)%i==0){
                c++;
            }
        }
        cout << c << "\n";
        while(a--){
            cout << "1 ";
        }
        while(b--){
            cout << "-1 ";
        }
        cout << "\n";
    }
    return 0;
}