#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(v) v.begin() , v.end()
#define lower s.begin() , s.end() , s.begin() , ::tolower
#define upper s.begin() , s.end() , s.begin() , ::toupper

using namespace std;

void solve() {
    ll n , one = 0 ,x;cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> x;
        if (x == 1) one++;
    }
    if (one > 0) cout << "HARD";
    else cout << "EASY";
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
    // files();
//     int t;cin >> t;
//     while (t--) {
//         solve();
//     }
    solve();
}


/*
<<<saved problems>>>

*/
