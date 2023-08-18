#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)

using namespace std;

void solve() {
    vector<char>a(8*8);
    string ans = "";
    for (int i = 0 ; i < a.size() ; i++) {
        cin >> a[i];
        if (a[i] != '.') ans += a[i];
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
    // solve();
}


/*
<<<saved problems>>>

*/