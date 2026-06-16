#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a,b,x,c=0,ans=0;
        cin >> a >> b >> x;
        if(a>b){
            swap(a,b);
        }
        while(a<=(b/x)){
            b/=x;
            c++;
        }
        ans=abs(a-b)+c;
        while(a>0 || b>0){
            if(a>b){
                swap(a,b);
            }
            b/=x;
            c++;
            long long temp=abs(a-b)+c;
            ans=min(ans,temp);
        }
        cout << ans << "\n";
    }
    return 0;
}