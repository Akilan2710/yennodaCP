#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    int par = 0;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--){
        if (par == 1)
            a[i] = -a[i];
        if (a[i] > 0){
            ans.push_back(i);
            par ^= 1;
        }
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] + 1 << " \n"[i == ans.size() - 1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}