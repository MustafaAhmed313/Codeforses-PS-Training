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
    string s , ans = "";cin >> s;//.-.--
    int i = 0;
    while (i < s.length()) {
        string str = s.substr(i , 2);
        if (str == "--") ans += "2" , i+=2;
        else if (str == "-.") ans += "1" , i+=2;
        else ans += "0" , i++;
    }
    cout << ans;
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
