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
        for(int i=0;i<n;i++) cin >> a[i];
        int i=0,r=INT_MIN;
        while(i<n){
        	int j=i,mi=0,x=a[i];
        	mi=min(mi,x);
        	r=max(r,a[i]);
        	while(j+1<n && abs(a[j])%2!=abs(a[j+1])%2){
        		j++;
        		x+=a[j];
        		r=max(r,x-mi);
        		mi=min(mi,x);
        	}
        	i=j+1;
        }
        cout << r << '\n';
    }
    return 0;
}