#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        unordered_map<int, pair<int, long long>> target_map;
        
        int x = a[0];
        int c = 0;
        while (true) {
            if (target_map.find(x) == target_map.end()) {
                target_map[x] = {1, (long long)c};
            }
            if (x == 1) {
                if (target_map.find(2) == target_map.end()) {
                    target_map[2] = {1, (long long)(c + 1)};
                }
                break;
            }
            if (x == 2) {
                if (target_map.find(1) == target_map.end()) {
                    target_map[1] = {1, (long long)(c + 1)};
                }
                break;
            }
            if (x == 0) break;
            
            if (x & 1) x += 1;
            else x >>= 1;
            c++;
        }
        
        for (int i = 1; i < n; i++) {
            x = a[i];
            c = 0;
            unordered_set<int> local_vis;
            
            while (true) {
                if (local_vis.find(x) == local_vis.end()) {
                    local_vis.insert(x);
                    auto it = target_map.find(x);
                    if (it != target_map.end() && it->second.first == i) {
                        it->second.first++;
                        it->second.second += c;
                    }
                }
                
                if (x == 1) {
                    if (local_vis.find(2) == local_vis.end()) {
                        auto it = target_map.find(2);
                        if (it != target_map.end() && it->second.first == i) {
                            it->second.first++;
                            it->second.second += (c + 1);
                        }
                    }
                    break;
                }
                if (x == 2) {
                    if (local_vis.find(1) == local_vis.end()) {
                        auto it = target_map.find(1);
                        if (it != target_map.end() && it->second.first == i) {
                            it->second.first++;
                            it->second.second += (c + 1);
                        }
                    }
                    break;
                }
                if (x == 0) break;
                
                if (x & 1) x += 1;
                else x >>= 1;
                c++;
            }
        }
        
        long long ans = 1000000000000000000LL;
        for (auto &pair : target_map) {
            if (pair.second.first == n) {
                ans = min(ans, pair.second.second);
            }
        }
        
        if (ans == 1000000000000000000LL) cout << -1 << "\n";
        else cout << ans << "\n";
    }
    return 0;
}
