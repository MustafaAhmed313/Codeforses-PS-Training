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
    int y , k , result;cin >> y >> k;
    result = 6 - max(y , k) + 1;
    if (result == 2) cout << "1/3";
    else if (result == 3) cout << "1/2";
    else if (result == 4) cout << "2/3";
    else if (result == 6) cout << "1/1";
    else if (result == 0) cout << "0/1";
    else cout << result << "/" << 6;
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
    ////<<**Optimization**>>////
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // files();
//    int t;cin >> t;
//    while (t--) {
//        solve();
//    }
    solve();
}


/*
<<<saved problems>>>


 */
