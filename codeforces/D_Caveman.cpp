#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> a(n,0);
        for(int i=0;i<m;i++){
            int x,y;
            cin >> x >> y;
            a[x-1]++;a[y-1]++;
        }
        sort(a.begin(),a.end());
        if(a[0]==0) cout << "Brain Melt\n";
        else if(a[n-1]==n-1 && a[n-2]==1) cout << "2\n";
        else cout << "Many\n";
    }
    return 0;
}