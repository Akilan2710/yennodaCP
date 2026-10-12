#include <bits/stdc++.h>
using namespace std;

bool check(int m, vector<int> a, vector<int> b){
    for(int i=0;i<m;i++){
		a.pop_back();
		b.pop_back();
    }
    reverse(b.begin(), b.end());
	for (int i = 0; i < (int)a.size(); i++) if (a[i] >= b[i]) return false;
	return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
	    cin >> n >> m;
	    vector<int> a(n), b(n);
	    a[0] = 1;
	    for (int i = 1; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end(), greater<>());
	    int low=0,high=n;
	    while(low<high){
		    int mid=(low+high)/2;
		    if(check(mid,a,b)) high = mid;
		    else low = mid + 1;
		}
        cout << low << '\n';
    }
    return 0;
}