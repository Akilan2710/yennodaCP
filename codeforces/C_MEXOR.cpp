#include <bits/stdc++.h>
using namespace std;

int bit_length(long long val) {
    int length = 0;
    while (val > 0) {
        length++;
        val >>= 1;
    }
    return length;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        if (n == 1){
            if (k== 1){
            cout << "YES\n0\n"; 
            }
            else{
                cout << "NO\n";
            }
            continue;
        }
        k^=n;
        if (bit_length(k) > bit_length(n-1)){
            cout << "NO\n";
            continue;
        }
        vector<long long> s,a;
        if (0<k && k<=(n-1)){
            s.push_back(k);
        }
        else if(k){
            s.push_back(n - 1);
            s.push_back((n - 1) ^ k);
            s.push_back(0);
        }
        a=s;
        vector<bool> ins(n,false);
        for(long long i:s){
            if(i>=0 && i<n){
                ins[i]=1;
            }
        }
        for(long long i=0;i<n;i++){
            if(!ins[i])
                a.push_back(i);
        }
        cout << "YES\n";
        for(auto i=a.rbegin();i!=a.rend();i++){
            cout << *i << " ";
        }
        cout << "\n";
    }
    return 0;
}