#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
		cin >> n >> s;
		ll ans = 0;
		vector<int> a(n+1,0);
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j+=i){
                if(s[j-1]=='1') break;
				if(a[j]) continue;
				else{
					a[j]=1;
					ans+=i;
				}
			}
		}
		cout << ans << "\n";
    }
    return 0;
}