#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n, m, a, b;
        std::cin >> n >> m >> a >> b;
        bool possible = (
            std::gcd(n, a) == 1 and
            std::gcd(m, b) == 1 and
            std::gcd(n, m) <= 2
        );
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }
    return 0;
}