#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(a) a.begin() , a.end()
#define lower s.begin() , s.end() , s.begin() , ::tolower
#define upper s.begin() , s.end() , s.begin() , ::toupper
#define line(s)  getline(cin , s)
#define vll vector<ll>
#define msll multiset<ll>
#define sll set<ll>

using namespace std;

void solve() {
    ll n , a;cin >> n >> a;
    vll v(n);
    bool f = false;
    ll mini = 1e9 , maxi = 0 , idx = -1;
    for (int i = 0 ; i < n ; i++) {
        cin >> v[i];
        if (v[i] == a) f = true;
    }
    sort(all(v));
    int i = 0;// 1 3 4 5 || a = 2 || i = 2
    if (f) {
        while (v[i] != a) i++;
        if (i == 0) {
            if (v.size() < 2) cout << 0;
            else cout << v[i+1] - a;
        }
        else if (i == n-1) cout << a - v[i-1];
        else cout << min(v[i+1] - a , a - v[i-1]);
    }else {
        while (v[i] < a) i++;
        if (i == 0) cout << v[i] - a;
        else if (i == n) cout << a - v[n-1];
        else if (v.size() == 2) cout << min(a - v[0] , v[1] - a);
        else cout << v[i] - v[i-1] + min(v[i] - a , a - v[i-1]);
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
//    int t;cin >> t;
//    while (t--) {
//        solve();
//    }
    solve();
}


/*
<<<saved problems>>>

*/