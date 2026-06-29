#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while(t--){
        long long n,k,c,a=0;
        set<long long> s;
        cin >> n >> k;
        for(long long i=0;i<n;i++){
            long long a;
            cin >> a;
            s.insert(a);
        }
        c=n-k+1-(n-s.size());
        while(s.count(a) && a<s.size()-c){
            a++;
        }
        cout << a << "\n";
    }
    return 0;
}