#include <bits/stdc++.h>
using namespace std;

int gmode(int a,int b){
    if(a>b){
        return 0;
    }
    else if(b>a){
        return 1;
    }
    else{
        return 2; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        string s1,s2;
        cin >> n >> k;
        cin >> s1;
        cin >> s2;
        vector<int> a00(n+1,0),a01(1+n,0),a10(1+n,0),a11(n+1,0);
        for(int i=0;i<n;i++){
            a00[i+1]=a00[i];
            a10[i+1]=a10[i];
            a01[i+1]=a01[i];
            a11[i+1]=a11[i];
            if(s1[i]=='0' && s2[i]=='0')a00[i+1]++;
            if(s1[i]=='0' && s2[i]=='1')a01[i+1]++;
            if(s1[i]=='1' && s2[i]=='0')a10[i+1]++;
            if(s1[i]=='1' && s2[i]=='1')a11[i+1]++;
        }
        for(int i=0;i<k;i++){
            int l,r;
            cin >> l >> r;
            int x,y,u,v;
            u=a00[r]-a00[l-1];
            y=a01[r]-a01[l-1];
            x=a10[r]-a10[l-1];
            v=a11[r]-a11[l-1];
            if(abs(x-y)<=(u+v)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}