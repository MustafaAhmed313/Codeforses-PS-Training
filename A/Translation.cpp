#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(v) v.begin() , v.end()
#define lower s.begin() , s.end() , s.begin() , ::tolower
#define upper s.begin() , s.end() , s.begin() , ::toupper

using namespace std;

void solve() {
    string s1 , s2;cin >> s1 >> s2;
    bool f = false;
    for (int i = 0 , j = s2.length() - 1 ; i < s1.length() && j >= 0 ; i++ , j--) {
        if (s1[i] !=  s2[j]) {
            f = true;
            break;
        }
    }
    if (!f) cout << "YES";
    else cout << "NO";
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
