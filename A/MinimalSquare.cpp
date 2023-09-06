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
    int a , b ,m;cin >> a >> b;
    if (a <= b) {
        m = a * 2;
        if (m >= b) cout << m*m << endl;
        else cout << b * b << endl;
    }else {
        m = b * 2;
        if (m >= a) cout << m*m << endl;
        else cout << a * a << endl;
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
    ////<<**Optimization**>>////
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // files();
    int t;cin >> t;
    while (t--) {
        solve();
    }
//    solve();
}


/*
<<<saved problems>>>

*/
