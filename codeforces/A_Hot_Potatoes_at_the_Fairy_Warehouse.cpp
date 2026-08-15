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
        vector<int> ans={0,0};
        cin >> n >> k;
        string s;
        cin >> s;
        n*=2;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                int j=(i+1)%n;
                if(s[j]=='1'){
                    ans[i%2]++;
                }
                else{
                    ans[j%2]++;
                }
            }
        }
        cout << ans[1] << " " << ans[0] << "\n";
    }
    return 0;
}