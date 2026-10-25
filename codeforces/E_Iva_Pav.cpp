#include <bits/stdc++.h>
using namespace std;

// Sparse Table to answer Range AND Queries in O(1)
class SparseTable {
    int n;
    int K;
    vector<vector<int>> st;
    vector<int> lg;

public:
    void init(const vector<int>& a) {
        n = a.size();
        K = __lg(n) + 1;
        st.assign(n, vector<int>(K));
        lg.assign(n + 1, 0);

        for (int i = 2; i <= n; i++) {
            lg[i] = lg[i / 2] + 1;
        }

        for (int i = 0; i < n; i++) {
            st[i][0] = a[i];
        }

        for (int j = 1; j < K; j++) {
            for (int i = 0; i + (1 << j) <= n; i++) {
                st[i][j] = st[i][j - 1] & st[i + (1 << (j - 1))][j - 1];
            }
        }
    }

    int query(int L, int R) {
        int j = lg[R - L + 1];
        return st[L][j] & st[R - (1 << j) + 1][j];
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    SparseTable st;
    st.init(a);

    int q;
    cin >> q;
    while (q--) {
        int l, k;
        cin >> l >> k;
        l--; // Convert to 0-based indexing

        if (a[l] < k) {
            cout << "-1 ";
            continue;
        }

        // Binary search for the maximum valid R
        int low = l, high = n - 1, ans = l;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (st.query(l, mid) >= k) {
                ans = mid;
                low = mid + 1; // Try to expand the range to the right
            } else {
                high = mid - 1; // Range AND is too small, shrink range
            }
        }
        cout << ans + 1 << " "; // Convert back to 1-based indexing
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
