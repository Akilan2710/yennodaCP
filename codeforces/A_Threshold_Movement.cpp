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
        if(n%2==1){
            cout << "NO\n";
            for(int i=0;i<n;i++){
                int x;
                cin >> x;
            }
        }
        else{
            n/=2;
            int f=1,amax=INT_MAX,amin=0;
            for(int i=0;i<n;i++){
                int a,b;
                cin >> a >> b;
                if(f){
                    if(a<=b){
                        cout << "NO\n";
                        f=0;
                    }
                    else{
                        int ma=a-1,mi=b+1;
                        if(ma<mi || ma<amin || mi>amax){
                            cout << "NO\n";
                            f=0;
                        }
                        else{
                            amax=min(amax,ma);
                            amin=max(amin,mi);
                        }
                    }
                }
            }
            if(f){
                cout << "YES\n";
            }
        }
    }
    return 0;
}