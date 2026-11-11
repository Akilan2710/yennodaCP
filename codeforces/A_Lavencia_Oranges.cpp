#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 200005;
vector<ll> f(MAXN, 0);

void pre(){
    vector<ll> s(MAXN, 0);
    for(int i=1;i<MAXN;i++){
        for(int j=i;j<MAXN;j+=i) s[j]+=i;
    }
    for(int i=1;i<MAXN;i++) f[i]=f[i-1]+s[i];
}

void solve() {
    int n;
    cin >> n;
    int m=lower_bound(f.begin(),f.end(),n)-f.begin();
    vector<int> c(m+1,0);
    int a=n;
    for(int i=m;i>=2;i--){
        int b=min(m/i,a/i);
        c[i]=b;
        a-=b*i;
    }
    c[1]=a;
    cout << m << "\n";
    int cb=1;
    for(int i=1;i<=m;i++){
        for(int j=0;j<c[i];j++){
            for (int k=0;k<i;k++) cout << cb << " ";
            cb++;
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pre();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}