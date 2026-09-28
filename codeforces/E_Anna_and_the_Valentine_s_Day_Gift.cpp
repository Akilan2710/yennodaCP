#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int c=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a,f=0,x=0;
            cin >> a;
            while(a){
                int y=a%10;
                if(y==0){
                    if(f==0) x++;
                    else c++;
                }
                else{
                    c++;
                    f=1;
                }
                a/=10;
            }
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-2;i>=0;i-=2){
            if(v[i]==0) break;
            c+=v[i];
        }
        if(c>m){
            cout << "Sasha\n";
        }
        else{
            cout << "Anna\n";
        }
    }
    return 0;
}