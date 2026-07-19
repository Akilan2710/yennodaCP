#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a10=0,a01=0,a11=0,a00=0;
        cin >> n;
        vector<int> v1(n),v2(n);
        for(int i=0;i<n;i++){
            cin >> v1[i];
        }
        for(int i=0;i<n;i++){
            cin >> v2[i];
            if(v1[i]==0 && v2[i]==0){
                a00++;
            }
            else if(v1[i]==0 && v2[i]==1){
                a01++;
            }
            else if(v1[i]==1 && v2[i]==0){
                a10++;
            }
            else{
                a11++;
            }
        }
        if(a10+a01==0){
            cout << "0\n";
        }
        else if(a10%2==1){
            cout << "1\n";
        }
        else if(a10>0){
            cout << "2\n";
        }
        else if(a11>0 && a00>0){
            cout << "2\n";
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}