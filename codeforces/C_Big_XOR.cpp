#include <bits/stdc++.h>
#define int long long
using namespace std;

int xo(int n) {
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    return 0;
}

int find(int V) {
    if(V<=0) return -1;
    int x = 0;
    for (int i = 0; i <= 35; ++i) {
        int v_bit = (V >> i) & 1;
        int prev_x_bit = (i == 0 ? 0 : ((x >> (i - 1)) & 1));
        int x_bit = v_bit ^ prev_x_bit;
        if (x_bit) {
            x |= (1LL << i);
        }
    }
    if ((x ^ (2 * x)) == V) return x;
    return -1;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m=xo(n);
        int a=0;
        while((1LL<<a)<=n) a++;
        int k=(1LL<<a)-1;
        vector<int> t1={2*k,2*k+1},ans(n,0);
        if(m>=2*k) continue;
        else{
            int f=0;
            for(int i=max(1LL,(k+1)/2);i<=n;i++){
                int c=m^i^(2*i);
                if(c>=2*k){
                    ans[i-1]=1;
                    f=1;break;
                }
            }
            if(f==0){
                for(int i=max(1LL,(k+1)/2);i<=n;i++){
                    int c=m^i^(2*i);
                    for(int j:t1){
                        int t2=c^j;
                        int x=find(t2);
                        if(x>=1 && x<=n && x!=i){
                            ans[x-1]=1;ans[i-1]=1;
                            f=1;break;
                        }
                    }
                    if(f==1) break;
                }
            }
            for(int i:ans) cout << i << " ";
            cout << "\n";
        }
    }
    return 0;
}