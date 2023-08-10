#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>
#include <set>
#include <queue>
#include <deque>
#include <cmath>

#define ll long long

using namespace std;

void solve() {
    ll n , t;cin >> n >> t;
    vector<ll>a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    ll l = 1 , r = 1e18, mid , ans = 0;
    while (r >= l) {
        mid = (l + r) / 2;
        ll products = 0;
        for (int i = 0 ; i < n ; i++) {
            products += mid / a[i];
            if (products >= t) break;
        }
        if (products >= t) ans = mid , r= mid - 1;
        else l = mid + 1;
    }
    cout << ans;
}

int main() {
    solve();
}
