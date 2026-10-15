#include <bits/stdc++.h>
using namespace std;
using LL = long long;

set<long long> nums;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (long long k = 2; k <= 1000; ++k) {
        long long val = 1 + k;
        long long p = k*k;
        for (int cnt = 2; cnt <= 20; ++cnt) {
            val += p;
            if (val > 1e6) break;
            nums.insert(val);            
            p *= k;
        }
    }
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if (nums.count(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}