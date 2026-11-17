#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		ll n,p;
		cin >> n >> p;
		vector<pair<ll,ll>> v(n);
		vector<ll> a(n),b(n);
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n;i++) cin >> b[i];
		for(int i=0;i<n;i++) v[i]={b[i],a[i]};
		sort(v.begin(),v.end());
		ll mc=p,sh=1;
		for(auto it:v){
			ll cs=it.second,sc=it.first;
			if(sc>=p) break;
			if(sh+cs>n){
				mc+=(n-sh)*sc;
				sh=n;
				break;
			}
            else{
				mc+=cs*sc;
				sh+=cs;
			}
		}
		mc+=(n-sh)*p;
		cout << mc << "\n";
	}
	return 0;
}
