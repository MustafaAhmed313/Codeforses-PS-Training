#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        map<int , int>m;
        for (int i= 0 ; i < n ; i++) {
            int a;cin >> a;m[a]++;
        }
        int ans = 0;
        for (auto e : m) {
            ans = max(ans , e.second);
        }
        cout << ans << endl;
    }
    return 0;
}