#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n, k;
		cin >> n >> k;
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) 
			cin >> a[i];

		long long ans = INT_MAX; 
		long long even_count = 0; 
		for (long long i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
				even_count++;
			if (a[i] % k == 0)
				ans = 0;
			ans = min(ans, (k - a[i] % k)); 
		}
		if (k == 4)
		{
			if (even_count >= 2)
				ans = min(ans, 0LL); // If there are at least two even numbers, no operations are needed
			else if (even_count == 1)
				ans = min(ans, 1LL); // If there is one even number, one operation is needed
			else if (even_count == 0)
				ans = min(ans, 2LL); // If there are no even numbers, two operations are needed
		}
		cout << ans << "\n";
    }
    return 0;
}