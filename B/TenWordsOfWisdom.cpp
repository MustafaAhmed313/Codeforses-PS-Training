#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)

using namespace std;

void solve() {
    int n , max_q = 0 , ans = 0;cin >> n;
    for (int i = 0 ; i < n ; i++) {
        int r , q;cin >> r >> q;
        if (r <= 10)  {
            if (max_q < q) ans = i+1;
            max_q = max(max_q , q);
        }
    }
    cout << ans << endl;
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
}


/*
<<<saved problems>>>

*/