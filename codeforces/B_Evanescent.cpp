#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        int n,c=1;
        set<int> st;
        cin >> n;
        cin >> s;
        for(int i=1;i<n-1;i++){
            if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                st.insert(i);
            }
            if(s[i]!=s[i-1]){
                c++;
            }
        }
        if(s[n-1]!=s[n-2]){
            c++;
        }
        if(st.empty()){
            cout << c << "\n";
        }
        else{
            c--;
            for(int i:st){
                if(s[i-1]==s[i+1]){
                    c--;
                    break;
                }
            }
            cout << c << "\n";
        }
    }
    return 0;
}