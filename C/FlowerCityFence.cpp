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
    int n;cin >> n;
    vector<int>a(n+1) , b;
    for (int i = 1 ; i <= n ; i++) cin >> a[i];
    if (n != a[1]) cout << "NO" << endl;
    else {
        for (int i = n ; i >= 1 ; i--) {
            while (b.size() < a[i]) b.push_back(i);
        }
        bool f = false;
        for (int i = 1 ; i < n ; i++) {
            if (a[i] != b[i-1]) {
                f = true;
                break;
            }
        }
        if (f) cout << "NO"<< endl;
        else cout << "YES" << endl;
    }
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