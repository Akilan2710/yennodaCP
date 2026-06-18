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
        string s;
        cin >> s;
        int a=count(s.begin(),s.end(),'1');
        if(a==0){
            cout << "0\n";
        }
        else if(n%2==1 && a%2==1){
            cout << "-1\n";
        }
        else if(n%2==0 && a%2==0){
            cout << a << "\n";
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    cout << (i+1) << " ";
                }
            }
            cout << "\n";
        }
        else{
            cout << (n-a) << "\n";
            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    cout << (i+1) << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}