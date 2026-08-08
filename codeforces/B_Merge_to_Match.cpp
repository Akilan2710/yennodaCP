#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m);
		for (int &x : a) {
		    cin >> x;
		}
		for (int &x : b) {
			cin >> x;
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		if (n < 2 * m) {
			cout<<"NO"<<endl;
			continue;
		}

		int i = 0;
		while (i < m && a[i] < b[i] && b[i] < a[n - m + i]) i++;
		cout<<(i < m ? "NO" : "YES")<<endl;
    }
    return 0;
}