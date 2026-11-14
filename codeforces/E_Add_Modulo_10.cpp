#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int f=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%5==0){
            f=1;
            a[i]=a[i]+a[i]%10;
        }
    }
    if(f==1) cout << (*min_element(a.begin(), a.end()) == *max_element(a.begin(), a.end()) ? "Yes": "No") << '\n';
    else{
        int f1=0,f2=0;
        for(int i=0;i<n;i++){
            int b=a[i];
            while(b%10!=2) b=b+b%10;
            if(b%20==2) f1=1;
            else f2=1;
        }
        cout << (f1&f2?"No\n":"Yes\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}