#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> car,int m){
    int n=car.size();
    vector<int> a(m+1,0);
    for(int i:car){
        a[i]++;
    }
    vector<int> s(m+2,0);
    for(int j=m;j>0;j--){
        s[j]=s[j+1]+a[j];
    }
    int ans=n;
    vector<int> at=car;
    for(int i=1;i<=m;i++){
        int d=s[i];
        if((i*2)<=m){
            d+=a[2*i];
        }
        if(d>ans){
            ans=d;
            vector<int> tem;
            for(int j=i+1;j<=m;j++){
                for(int k=0;k<a[j];k++){
                    tem.push_back(i);
                    tem.push_back(j-i);
                }
            }
            for(int j=1;j<=i;j++){
                for(int k=0;k<a[j];k++){
                    tem.push_back(j);
                }
            }
            at=tem;
        }
    }
    cout << ans << " ";
    return at;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int x=0;x<m;x++){
            vector<int> d=solve(a,m);
            a=d;
        }
        cout << "\n";
    }
    return 0;
}