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
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int segments = 0;
        int x = -1, y = -1;

        for (int i = 0; i < n; ++i) {
            if (segments == 0 || !(x + 1 <= a[i] && a[i] <= y + 1)) {
                segments++;
                x = a[i];
                y = a[i];
            } else {
                y = a[i];
            }
        }

        cout << segments << "\n";
    }
    return 0;
}