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
        unordered_map<int,map<int,int>> mp;
        unordered_map<int,int> c={{1,0},{2,0},{3,0}};        
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            c[x]++;
            mp[i][1]=c[1];
            mp[i][2]=c[2];
            mp[i][3]=c[3];
        }
        int f=0;
        for(int i=0;i<n-2;i++){
            int a=0,b=0;
            if(mp[i][1]>=(mp[i][2]+mp[i][3])){
                a=1;
                for(int j=i+1;j<n-1;j++){
                    if((mp[j][1]-mp[i][1]+mp[j][2]-mp[i][2])>=(mp[j][3]-mp[i][3])){
                        b=1;
                        break;
                    }
                }
            }
            if(a==1 && b==1){
                cout << "YES\n";
                f=1;
                break;
            }
        }
        if(!f){
            cout << "NO\n";
        }
    }
    return 0;
}