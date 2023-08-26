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
//i have a idea loop all elements of array b and if (b[i-1]>b[i]) a[i]=1;a[i+1]=b[i] else a[i] = b[i]
    ll n;cin >> n;
    vector<ll>b(n) , a;
    for (int i = 0 ; i < n ; i++) cin >> b[i];
    a.push_back(b[0]);
    for (int i = 1 ; i < n ; i++) {
        if (b[i-1] > b[i]) a.push_back(1) , a.push_back(b[i]);
        else a.push_back(b[i]);
    }
    cout << a.size() << endl;
    for (auto e : a) cout << e << " ";
    cout << endl;

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