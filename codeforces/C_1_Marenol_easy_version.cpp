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
        string s1,s2;
        cin >> s1 >> s2;
        if(s1==s2){
            cout << "YES\n";
        }
        else{
            int c1=0,c2=0;
            for(int i=0;i<n;i++){
                if(s1[i]=='1'){
                    i%2==0?c1++:c2++;
                }
                if(s2[i]=='1'){
                    i%2==0?c1--:c2--;
                }
            }
            if(c1==0 && c2==0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}