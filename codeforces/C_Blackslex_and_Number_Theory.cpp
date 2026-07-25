#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a1,a2;
        cin >> n >> a1 >> a2;
        if(a1>a2){
            swap(a1,a2);
        }
        for(int i=2;i<n;i++){
            int x;
            cin >> x;
            if(x<a2){
                if(x<a1){
                    a2=a1;
                    a1=x;
                }
                else{
                    a2=x;
                }
            }
        }
        cout << max(a1,a2-a1) << "\n";
    }
    return 0;
}