#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(v) v.begin() , v.end()

using namespace std;

void solve() {

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
//    solve();
    int n , x = 0;cin >> n;
    while (n--) {
        string s;cin >> s;
        if (s[1] == '+') x++;
        else x--;
    }
    cout << x;
}


/*
<<<saved problems>>>

*/
