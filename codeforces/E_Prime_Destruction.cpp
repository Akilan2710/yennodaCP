#include <bits/stdc++.h>
using namespace std;

vector<long long> pf[200001];
long long dp[200001];
bool cmp[200001];

void pre() {
    for (long long i = 2; i <= 200000; i++) {
        if (!cmp[i]) {
            cmp[i]=true;
            for (long long j = 2*i; j <= 200000; j+=i) {
                pf[j].push_back(i);
                cmp[j]=true;
            }
            pf[i].push_back(i);
        }
    }
}

void solve() {
    long long N, K; cin >> N >> K;
    long long aa = 0;
    vector<long long> dp(N+1,1e18);
    for (long long i = 1; i <= N; i++) {
        if (i<=K) {dp[i]=0;}
        for (auto x : pf[i]) {dp[i]=min(dp[i],dp[i/x]*x+1);}
    }
    for (long long i = 0; i < N; i++) {
        long long a; cin >> a;
        aa+=dp[a];
    }
    cout << aa << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pre();
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}