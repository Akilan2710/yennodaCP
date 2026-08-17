#include <bits/stdc++.h>
using namespace std;

// Function to validate if x displays of Type A and y displays of Type B can be made
bool isValid(int x, int y, const vector<int>& count) {
    // 1. Assign x stickers of '0' for Type A first digit
    if (count[0] < x) return false;
    long long rem0 = count[0] - x;

    // 2. Assign y stickers of '1' for Type B first digit
    if (count[1] < y) return false;
    long long rem1 = count[1] - y;

    // 3. Assign y stickers from remaining '0' and '1' for Type B second digit
    long long rem_0_1 = rem0 + rem1;
    if (rem_0_1 < y) return false;
    long long left_0_1 = rem_0_1 - y;

    // 4. Combine left over 0-1 with 2-5 for the first M position (needs x + y stickers)
    long long sum_0_5 = left_0_1 + count[2] + count[3] + count[4] + count[5];
    if (sum_0_5 < (x + y)) return false;
    long long left_0_5 = sum_0_5 - (x + y);

    // 5. Combine left over 0-5 with 6-9 for the remaining positions (needs 2x + y stickers)
    long long sum_0_9 = left_0_5 + count[6] + count[7] + count[8] + count[9];
    if (sum_0_9 < (2LL * x + y)) return false;

    return true;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> count(10, 0);
    for (char c : s) {
        count[c - '0']++;
    }

    int ans = 0;
    int max_x = min(n / 4, count[0]);

    // Iterate through all possible values of Type A displays (x)
    for (int x = 0; x <= max_x; x++) {
        int low = 0, high = (n / 4) - x;
        int best_y = -1;

        // Binary search for the maximum valid Type B displays (y)
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isValid(x, mid, count)) {
                best_y = mid;
                low = mid + 1; // Try to find a larger y
            } else {
                high = mid - 1;
            }
        }

        if (best_y != -1) {
            ans = max(ans, x + best_y);
        }
    }

    cout << ans << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
