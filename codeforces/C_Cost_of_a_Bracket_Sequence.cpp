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
        string s;
        cin >> s;
        int val=INT_MAX;
        string a(n,'0');
        for(int i=0;i<n;i++){
            int ck=k;
            string ca(n,'0'),t=s;
            for(int j=0;j<i;j++){
                if(s[j]=='(' && ck>0){
                    ck--;
                    ca[j]='1';
                    t[j]=')';
                }
            }
            for(int j=n-1;j>i;j--){
                if(s[j]==')' && ck>0){
                    ck--;
                    ca[j]='1';
                    t[j]='(';
                }
            }
            int cval=0,b=0;
            for(int j=0;j<n;j++){
                if(t[j]=='('){
                    b++;
                }
                else{
                    if(b>0){
                        b--;
                        cval+=2;
                    }
                }
            }
            if(cval<val){
                val=cval;
                a=ca;
            }
        }
        cout << a << "\n";
    }
    return 0;
}