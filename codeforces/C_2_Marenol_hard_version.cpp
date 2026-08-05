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
        string s1,s2;
        cin >> s1 >> s2;
        if(s1==s2){
            cout << "0\n";
        }
        else{
            int c1=0,c2=0;
            vector<int> o1,o2,e1,e2;
            for(int i=0;i<n;i++){
                if(s1[i]=='1'){
                    if(i%2==0){
                        c1++;
                        e1.push_back(i);
                    }
                    else{
                        c2++;
                        o1.push_back(i);
                    }
                }
                if(s2[i]=='1'){
                    if(i%2==0){
                        c1--;
                        e2.push_back(i);
                    }
                    else{
                        c2--;
                        o2.push_back(i);
                    }
                }
            }
            if(c1==0 && c2==0){
                long long ans=0;
                for(int i=0;i<e1.size();i++){
                    ans+=abs(e1[i]-e2[i]);
                }
                for(int i=0;i<o1.size();i++){
                    ans+=abs(o1[i]-o2[i]);
                }
                cout << (ans/2) << "\n";
            }
            else{
                cout << "-1\n";
            }
        }
    }
    return 0;
}