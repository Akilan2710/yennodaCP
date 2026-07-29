#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
		string s, t, r1 = "", r2 = "";
		cin >> s >> t;
		bool bj = 1;
		for (int i = 0; i < n; i++) {
			if (s[i] == t[i]) r1 += s[i], r2 += t[i];
			else {
				if (bj) r1 += '(', r2 += ')';
				else r1 += ')', r2 += '(';
				bj ^= 1;
			}
		}
		int t1 = 0, t2 = 0;
		bj = 1;
		for (int i = 0; i < n; i++) {
			if (r1[i] == '(') ++t1; else --t1;
			if (r2[i] == '(') ++t2; else --t2;
			if (t1 < 0 || t2 < 0) bj = 0;
		}
		if (t1 != 0 || t2 != 0) bj = 0;
		if (bj) cout << "YES\n";
		else cout << "NO\n";
    }
    return 0;
}