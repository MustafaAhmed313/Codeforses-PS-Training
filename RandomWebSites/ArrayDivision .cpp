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
#define N 1e18

using namespace std;

void solve() {
    ll n , k , mx = 0;cin >> n >> k;
    vector<ll>a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i] , mx =max(mx , a[i]);
    ll l = mx , r = 2e16 , mid , ans = 0;
    while (r >= l) {
        mid = (l + r) / 2;
        ll cur = 0 , sub = 1;
        for (int i = 0 ; i < n ; i++) {
            if (cur + a[i] > mid)
                cur = 0 , sub++;
            cur += a[i];
        }
        if (sub <= k) ans = mid , r = mid - 1;
        else l = mid + 1;
    }
    cout << ans;
}

int main() {
    solve();
}