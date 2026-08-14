#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> a(n);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i - 1];
        }
 
        int res = 0;
        for (int i = 0; i < 4; ++i) {
            int fs = (i & 1);
            int sc = (i >> 1) & 1;
            int flag = true;
            for (int j = 0; j < n; j +=2)
                if (a[j] != '?' && (a[j] - '0') != fs) {
                    flag = false;
                    break;
                } else fs ^= 1;
 
            for (int j = 1; j < n; j += 2)
                if (a[j] != '?' && (a[j] - '0') != sc) {
                    flag = false;
                    break;
                } else sc ^= 1;
 
            if (flag) ++res;
        }
        cout << res << "\n";
    }
    return 0;
}