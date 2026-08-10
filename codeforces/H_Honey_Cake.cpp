#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int a1,b1,c1;
        a1=gcd(a,d);
        d/=a1;
        b1=gcd(b,d);
        d/=b1;
        c1=gcd(c,d);
        d/=c1;
        if(d==1){
            cout << a1-1 << " " << b1-1 << " " << c1-1 << "\n";
        }else{
            cout << "-1\n";
        }
    return 0;
}