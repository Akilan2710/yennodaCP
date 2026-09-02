#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<ll> pre(n), suf(n+1);
    pre[0] = abs(a[0]);
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + abs(a[i]);
    
    suf[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suf[i] = suf[i + 1] + a[i];

    ll best = suf[0];
    int idx = -1;
    for (int i = 1; i < n; i++){
        if (a[i] > 0){
            ll score = pre[i - 1] + suf[i + 1] - a[i];
            if (score > best){
                best = score;
                idx = i;
            }
        }
    }

    if (idx == -1){
        cout << "0\n";
        return;
    }

    int par=0;
    vector<int> ans;
    for (int i = idx - 1; i >= 0; i--){
        if (par == 1)
            a[i] = -a[i];
        if (a[i] > 0){
            ans.push_back(i);
            par ^= 1;
        }
    }
    ans.push_back(idx);

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] + 1 << " \n"[i == ans.size() - 1];
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