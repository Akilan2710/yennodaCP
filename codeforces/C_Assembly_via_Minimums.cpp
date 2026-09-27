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
		int m = (n * (n - 1)) / 2;
		vector<int> v(m);
		for (int i = 0; i < m; i++)
			cin >> v[i];
		sort(v.begin(), v.end()); 
		int x = n - 1, i = 0;
		while (x > 0) {
			cout << v[i] << " ";
			i += x;
			x--;
		}
		cout << INT_MAX << "\n";
	}
    return 0;
}