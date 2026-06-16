#include <bits/stdc++.h>
using namespace std;
void solve(int n, int t,int c){
    int a,b;
    a = n/2;
    b = n-a;
    n = (a%2==0)?b:a;
    if(t==a || t==b){
        cout << c << "\n";
    }
    else if(n>1){
        c++;
        solve(n,t,c);
    }
    else{
        cout << "-1\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,t,c=1;
        cin >> n >> t;
        if(n==t){
            cout << "0\n";
        }
        else{
            solve(n,t,c);
        }
    }
    return 0;
}