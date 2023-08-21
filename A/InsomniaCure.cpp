#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(v) v.begin() , v.end()
#define lower s.begin() , s.end() , s.begin() , ::tolower
#define upper s.begin() , s.end() , s.begin() , ::toupper

using namespace std;

void solve() {
    int k , l , m , n , d , cnt = 0;cin >> k >> l >> m >> n >> d;
    for (int i = 1 ; i <= d ; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) cnt++;
    }
    cout << cnt;
}

void files() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}

ll GCD(ll a,ll b) {
    if(a==0)
        return b;
    return GCD(b%a,a);
}

ll LCM(ll a,ll b) {
    return a*(b/GCD(a,b));
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
