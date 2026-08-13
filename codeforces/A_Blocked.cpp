#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto &x : a)
		cin >> x;
		
	sort(a.rbegin(), a.rend());
	
	for (int i = 0; i < n-1; i++)
		if (a[i] == a[i+1]) {
			cout << "-1\n";
			return;
		}
	
	for (auto x : a)
		cout << x << " ";
	cout << "\n";
}
 
int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}