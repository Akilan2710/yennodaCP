#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

int solve(int x, int y){
    set<int> s;
    for(int i = 0; i <= n; i++){
        s.insert(i);
    }
    while(x>=0 && y<(2*n) && a[x]==a[y]){
        s.erase(a[x]);
        x--;
        y++;
    }
    return *s.begin();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        a=vector<int> (2*n);
        int x=-1,y;
        for(int i = 0; i < 2*n; i++){
            cin >> a[i];
            if(!a[i]){
                if(x==-1){
                    x=i;
                }
                else{
                    y=i;
                }
            }
        }
        cout << max({solve(x, x), solve(y, y), solve((x + y)/2, (x + y + 1)/2)}) << "\n";
    }
    return 0;
}