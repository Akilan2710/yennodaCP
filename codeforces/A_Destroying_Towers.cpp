#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = 10000, y = 0;
        for (int i = 0; i < n; ++i) {
            int z;
            cin >> z;
            x = min(x, z), y += x;
        }
        cout << y << '\n';
    }
    return 0;
}
