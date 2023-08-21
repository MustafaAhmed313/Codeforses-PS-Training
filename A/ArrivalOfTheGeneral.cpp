#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(v) v.begin() , v.end()
#define lower s.begin() , s.end() , s.begin() , ::tolower
#define upper s.begin() , s.end() , s.begin() , ::toupper

using namespace std;

void solve() { //10 10 58 31 63 40 76 | 33 44 11 22
    ll n;cin >> n;
    int max = 0 , max_idx = 0 , min = 101 , min_idx = 0;
    map<int , vector<int>>m;// 33[0] 44[1] 11[2] 22[3]
    for (int i = 0 ; i < n ; i++) { //min = 33 , max = 33
        int x;cin >> x;m[x].push_back(i);
        if (x <= min) {
            if (x == min) min_idx = i;
            else min = x , min_idx = i;
        }
        if (x >= max) {
            if (x != max) max = x , max_idx = i;
        }
    }
    int distance = 0;
    if (m[max][0] != 0) distance += max_idx;
    if (m[min][m[min].size() - 1] != n-1) distance += ((n-1) - min_idx);
    if (distance != 0) {
        if (max_idx > min_idx) cout << distance - 1;
        else cout << distance;
    }
    else cout << distance;
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
