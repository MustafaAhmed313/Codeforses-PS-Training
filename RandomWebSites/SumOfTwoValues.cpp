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
    vector<pair<int , int>>a(n);
    for (int i = 0 ; i < n ; i++) {
        int v;cin >> v;
        a[i] = {v , i+1};
    }
    sort(a.begin() , a.end());
    int i = 0 , j = n-1;
    bool f = false;
    while (i < j) {
        if (a[i].first + a[j].first == x) {
            if (a[i].second < a[j].second) cout << a[i].second << " " << a[j].second;
            else cout << a[j].second << " " << a[i].second;
            f = true;
            break;
        }else if (a[i].first + a[j].first > x) j--;
        else i++;
    }
    if (!f) cout << "IMPOSSIBLE";
}

int main() {
    solve();
}