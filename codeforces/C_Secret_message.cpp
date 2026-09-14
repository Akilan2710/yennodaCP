#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long> vll;
typedef vector<vll> matrix;
typedef map<ll,ll> mapll;
typedef set<ll> setll;
const ll INF = LONG_LONG_MAX;
 
void solve() {
	ll n,k;
	cin >> n >> k;
	vector<string> a(k);
	setll d;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			d.insert(i);
			d.insert(n/i);
		}
	}
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	vll mask(n,0);
	for (int j = 0; j < k; j++) {
		for (int i = 0; i < n; i++) {
			mask[i] |= (1 << (a[j][i] - 'a'));
		}
	} 
	vll div;
	for (auto ch : d) div.push_back(ch);
	sort(div.begin(),div.end());
	for (int i = 0; i < div.size(); i++) {
		ll d = div[i];
		vll ans;
		for (int j = 0; j < d; j++) {
			ll can = (1LL << 26) - 1;
			for (int pos = j; pos < n; pos += d) {
				can &= mask[pos];
			}
			if (can) {
				for (int c = 0; c < 26; c++) {
					if (can & (1 << c)) {
						ans.push_back('a' + c);
						break;
					}
				}
			} else break;
		}
		if (ans.size() == d) {
			string str = "";
			string res = "";
			for (auto ch : ans) str += ch;
			for (int h = 0; h < n / d; h++) {
				res += str;
			}
			cout << res << "\n";
			break;
		} else continue;
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