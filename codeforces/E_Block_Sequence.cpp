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
		vector<int> a(n);
		for(auto &i:a) cin >> i;
		vector<int> b(n+1);
		b[n]=0;
		for(int i=n-1;i>=0;--i){
			b[i]=b[i+1]+1;
			int j=i+a[i]+1;
			if(j<=n) b[i]=min(b[i],b[j]);
		}
		cout << b[0] << '\n';
    }
    return 0;
}