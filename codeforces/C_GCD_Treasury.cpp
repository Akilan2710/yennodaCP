#include <bits/stdc++.h>
using namespace std;
#define N 300030
int T,n,x,a[N];
long long ans;

void fn(int d){
	long long s=0;
	while(x%d==0) x/=d;
	for(int i=1;i<=n;i++) if(a[i]%d==0) s+=a[i];
	ans=max(ans,s);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ans=0;
		cin >> n >> x;
		for(int i=1;i<=n;i++) cin >> a[i];
		for(int i=2;i*i<=x;i++) if(x%i==0) fn(i);
		if(x>1) fn(x);
		cout << ans << "\n";
    }
    return 0;
}
