#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(v) v.begin() , v.end()
#define lower s.begin() , s.end() , s.begin() , ::tolower
#define upper s.begin() , s.end() , s.begin() , ::toupper

using namespace std;

void solve() {
    ll n;cin >> n;
    int max = 0 , max_idx = 0 , min = 101 , min_idx = 0;
    vector<int>a(n);
    vector<int> max_i , min_i;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
        if (a[i] >= max) max = a[i] , max_idx = i , max_i.push_back(max_idx);
        if (a[i] <= min) min = a[i] , min_idx = i , min_i.push_back(min_idx);
    }
    if (max_i[0] == 0 && min_i[min_i.size() - 1] == n-1) cout << 0;
    else if (max_idx > min_idx) cout << ((max_idx) + ((n-1) - min_idx)) - 1;
    else cout << (max_idx) + ((n - 1) - min_idx);
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