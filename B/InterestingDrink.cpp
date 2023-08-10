#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

void solve() {
    int n , q , d;cin >> n;
    int a[n];
    for (int i= 0 ; i < n ; i++) cin >> a[i];
    sort(a , a+n);
    cin >> q;
    while (q--) {
        cin >> d;
        int l = 0 , r = n - 1 , mid , cost = 0;
        while (l <= r) {
            mid = (l+r) / 2;
            if (a[mid] <= d) {
                cost += (mid - l) + 1;
                l = mid + 1;
            }else r = mid - 1;
        }
        cout << cost << endl;
    }
}

int main() {
    solve();
}
