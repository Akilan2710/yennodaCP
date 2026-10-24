#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define OrderedSet tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
		cin >> n;
		vector<pair<int,int>> a(n);
		for(int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
		sort(a.begin(),a.end());
		OrderedSet st;
		ll ans = 0;
        for(int i=0;i<n;i++){
			ans += i - st.order_of_key(a[i].second);
			st.insert(a[i].second);
		}
        cout << ans << '\n';
    }
    return 0;
}