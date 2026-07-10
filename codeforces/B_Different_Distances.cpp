#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
       int n;
	    cin >> n;
	    if (n % 2 == 0){
    		for (int i = 0; i < n; i += 2){
    			cout << (i + 2) << ' ' << (i + 1) << ' ' << (i + 1) << ' ' << (i + 2) << ' ';
	    		cout << (i + 1) << ' ' << (i + 2) << ' ' << (i + 2) << ' ' << (i + 1) << ' ';
		    }
	    }
    	else{
	    	cout << "3 3 2 1 1 2 1 2 2 3 1 3 ";
		    for (int i = 3; i < n; i += 2){
			    cout << (i + 2) << ' ' << (i + 1) << ' ' << (i + 1) << ' ' << (i + 2) << ' ';
    			cout << (i + 1) << ' ' << (i + 2) << ' ' << (i + 2) << ' ' << (i + 1) << ' ';
	    	}
    	}
	    cout << '\n'; 
    }
    return 0;
}