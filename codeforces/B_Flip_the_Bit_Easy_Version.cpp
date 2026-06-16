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
        std::cin >> n >> k;
        std::vector<int> a(n),b(k);
        for(int i=0;i<n;i++){
            std::cin >> a[i];
        }
        for(int i=0;i<k;i++){
            std::cin >> b[i];
        }
        int l=(n+1)/2;
        int m=b[0],d=max(l-m,m-l);
        for(int x:b){
            if(max(l-x,x-l)<d){
                d=max(l-x,x-l);
                m=x;
            }
        }
        m--;
        int a1=a[0],c1=(a[0]==a[m])?0:1;
        int a2=a[n-1],c2=(a[n-1]==a[m])?0:1;
        for(int i=1;i<m;i++){
            if(a[i]!=a1){
                c1++;
                a1=a[i];
            }
        }
        c1+=(c1%2==0)?0:1;
        for(int i=n-2;i>m;i--){
            if(a[i]!=a2){
                c2++;
                a2=a[i];
            }
        }
        c2+=(c2%2==0)?0:1;
        cout << max(c1,c2) << "\n";
    }
    return 0;
}