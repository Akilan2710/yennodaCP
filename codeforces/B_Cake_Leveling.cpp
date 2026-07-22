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

        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        long long ans = 1e9, sum = 0;

        for(int i=0; i<n; i++)
        {
            sum += a[i];
            ans = min(ans, sum / (i + 1));

            cout << ans << " ";
        }
        cout << "\n"; 
    }
    return 0;
}