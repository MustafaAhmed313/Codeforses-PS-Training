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
    int n;cin >> n;// [2 , 0 , 1]
    int a[n];
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    int m;cin >> m;//1
    while (m--) {// x = 2 , y = 2 , left = 1 , right = 2
        int x , y , right , left;cin >> x >> y;x--;
        if (y <= a[x] && y >= 1) {
            left = y - 1 , right = a[x] - y , a[x] = 0;
            if (x == 0) a[x+1] += right;
            else if (x == n-1) a[x-1] += left;
            else a[x+1] += right , a[x-1] += left;
        }
    }
    for (auto e : a) cout << e << endl;
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
