#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(v) v.begin() , v.end()
#define lower s.begin() , s.end() , s.begin() , ::tolower
#define upper s.begin() , s.end() , s.begin() , ::toupper
#define line(s)  getline(cin , s)

using namespace std;

void solve() {
    int n , m;cin >> n >> m;
    char arr[n][m];
    for (int r = 0 ; r < n ; r++) {
        for (int l = 0 ; l < m ; l++) {
            cin >> arr[r][l];
        }
    }
    int count = 0;
    bool v = false , i = false , k = false , a = false;
    for (int r = 0 ; r < m && !(v&&i&&k&&a) ; r++) {
        for (int l = 0 ; l < n ; l++) {
            if (count == 0 && arr[l][r] == 'v' && !v) {
                v = true;count++;break;
            }
            if (count == 1 && arr[l][r] == 'i' && !i) {
                i = true;count++;break;
            }
            if (count == 2 && arr[l][r] == 'k' && !k) {
                k = true;count++;break;
            }
            if (count == 3 && arr[l][r] == 'a' && !a) {
                a = true;count++;break;
            }
        }
        if (count == 4) break;
    }
    if (v&&i&&k&&a) cout << "YES" << endl;
    else cout << "NO" << endl;
}

void files() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}

ll gcd(ll a,ll b) {
    if(a==0)
        return b;
    return gcd(b%a,a);
}

ll lcm(ll a,ll b) {
    return a*(b/gcd(a,b));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // files();
    int t;cin >> t;
    while (t--) {
        solve();
    }
//    solve()
}


/*
<<<saved problems>>>

*/
