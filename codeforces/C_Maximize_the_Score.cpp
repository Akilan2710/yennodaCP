#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
		int n;
		cin >> n;
		vector<int> a(2 * n);
		for (int i=0;i<2*n;i++) {
			cin >> a[i];
		}
		vector<int> lp(2 * n, -1);
		vector<int> occ(n, -1);
		for (int i = 0; i < 2 * n; ++i) {
			if (occ[a[i] - 1] != -1) {
				lp[i] = occ[a[i] - 1];
			} else {
				occ[a[i] - 1] = i;
			}
		}
		vector<long long> dp(2 * n);
		dp[0] = 1;
		for (int i = 1; i < 2 * n; ++i) {
			dp[i] = dp[i - 1] + 1;
			if (lp[i] != -1) {
				dp[i] = max(dp[i], (lp[i] == 0 ? 0 : dp[lp[i] - 1]) + 1LL * (i - lp[i] + 1) * (i - lp[i] + 1));
			}
		}
		cout << dp[2 * n - 1] << endl;
    }
    return 0;
}