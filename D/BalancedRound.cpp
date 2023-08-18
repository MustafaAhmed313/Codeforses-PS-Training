#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(v) v.begin() , v.end()

using namespace std;

void solve() {
    ll n , k;cin >> n >> k;
    vector<ll>a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    sort(all(a));
    ll taken = 1 , ans = 1;
    for (int i = 0 ; i < n ; i++) {
        if (abs(a[i] - a[i-1]) > k)  taken = 1;
        else taken++;
        ans = max(ans , taken);
    }
    cout << n - ans << endl;
}

void files() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    files();
    int t;cin >> t;
    while (t--) {
        solve();    
    }
    // solve();
}


/*
<<<saved problems>>>

*/