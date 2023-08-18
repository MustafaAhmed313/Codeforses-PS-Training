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
#define large (1e9 + 5)

using namespace std;

void solve() {
    ll n , x;cin >> n >> x;
    vector<int>a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    ll i = 0 , j = 0 , sub = 0 , sum = 0;
    while (i < n && j < n) {
        if (a[j] + sum < x) sum += a[j++];
        else if (a[j] + sum > x) {
            if (sum == 0) i++ , j++;
            else sum -= a[i++];
        }else sub++ ,sum += a[j++];
    }
    cout << sub;
}

int main() {
    solve();
}