#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(a) a.begin() , a.end()
#define lower s.begin() , s.end() , s.begin() , ::tolower
#define upper s.begin() , s.end() , s.begin() , ::toupper
#define line(s)  getline(cin , s)

using namespace std;

void solve() {
    //2 b = 7 d = 10 [5 , 6]
    ll n , b , d;cin >> n >> b >> d;
    int a[n];
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    int cnt = 0 , cap = 0;
    for (auto orange : a) {
        if (orange <= b) cap += orange;
        if (cap > d) cnt++ , cap = 0;
    }
    cout << cnt;
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
