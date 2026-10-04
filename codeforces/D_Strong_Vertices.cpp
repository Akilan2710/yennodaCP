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
		vector<int> a(n),b(n),diff(n);
		int maxDiff = INT_MIN;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++){
			cin >> b[i];
			diff[i]=a[i]-b[i];
			maxDiff=max(maxDiff,diff[i]);
		}
		vector<int> ans;
		for (int i = 0; i < n; i++){
			if (diff[i] == maxDiff) {
				ans.push_back(i + 1);
			}
		}
		cout << ans.size() << "\n";
		for (int i = 0; i < ans.size(); i++){
			cout << ans[i] << " ";
		}
		cout << "\n";
    }
    return 0;
}