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
	    vector<int> a(n+5),p(n+5);
	    for(int i=1;i<=n;i++){
		    cin >> a[i];
		    p[a[i]]=i%2;
	    }
	    int b=0,f=1;
	    for(int x=n;x>0;x--){
		    if(p[x]%2==0) b++;
		    if(p[x] % 2 == 1) b--;
		    if(abs(b) > 1){
                f=0;
                break;
		    }
	    }
	    cout << (f==1?"YES\n":"NO\n");
    }
    return 0;
}