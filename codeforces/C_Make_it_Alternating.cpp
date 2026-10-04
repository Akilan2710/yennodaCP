#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli mod = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
		cin >> s;
		int n = s.size();
		lli ans = 1;
		int ansLen = 1;
		int cur = 1;
		for (int i = 1; i < n; i++) {
			if (s[i] != s[i - 1]) {
				ansLen++; 
				ans = (ans * cur) % mod;
				cur = 1;
			} 
            else cur++;
		}
		ans = (ans * cur) % mod;
		for (int i = 1; i <= n - ansLen; i++) ans = (ans * i) % mod;
		cout << n - ansLen << " " << ans << endl;
    }
    return 0;
}