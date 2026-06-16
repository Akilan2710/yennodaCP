#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,c=0;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        if(gcd(a[0],a[1])<a[0]){
            c++;
        }
        if(gcd(a[n-2],a[n-1])<a[n-1]){
            c++;
        }
        for(int i=1;i<n-1;i++){
            int g1=gcd(a[i],a[i-1]);
            int g2=gcd(a[i],a[i+1]);
            if(lcm(g1,g2)<a[i]){
                c++;
            }
        }
        cout << c << "\n";
    }
    return 0;
}