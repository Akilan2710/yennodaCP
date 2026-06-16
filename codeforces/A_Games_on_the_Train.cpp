#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,min,max;
        cin >> n;
        vector<int> a(n);
        cin >> a[0];
        min = max = a[0];
        for(int i = 1; i < n; i++){
            cin >> a[i];
            if(a[i] < min){
                min = a[i];
            }
            if(a[i] > max){
                max = a[i];
            }
        }
        cout << (max - min + 1) << "\n";
    }
    return 0;
}