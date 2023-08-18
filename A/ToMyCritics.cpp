#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)

using namespace std;

void solve() {
    int a , b , c;cin >> a >> b >> c;
    if (a+b >= 10 || b+c >= 10 || a+c >= 10) cout << "YES" << endl;
    else cout << "NO" << endl;
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