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
        if(a.size()==1){
			cout << "1\n";
			continue;
		}
		vector<int> ans;
		ans.push_back(a[0]);
		ans.push_back(a[1]);
        for(int i=2;i<n;i++){
			int c=ans.size();
            int x=ans[c-2]-ans[c-1];
			int y=ans[c-1]-a[i];
			if(x>0){
				if(y>0) ans[c-1]=a[i];
                else if(y<0) ans.push_back(a[i]);
            }
            else{
				if(y<0) ans[c-1]=a[i];
				else if(y>0) ans.push_back(a[i]);
			}
        }
        int r=ans.size();
        cout << (ans[0]==ans[1]?r-1:r) << "\n";

    }
    return 0;
}