#include <bits/stdc++.h>

#define ll long long
#define N 1e18
#define large (1e9 + 5)
#define all(v) v.begin() , v.end()
#define lower s.begin() , s.end() , s.begin() , ::tolower
#define upper s.begin() , s.end() , s.begin() , ::toupper

using namespace std;

void solve() {
    ll n , t;cin >> n >> t;
    string s;cin >> s;
//    vector<pair<int , char>>v;
//    for (int i = 0 ; i < n ; i++) {
//        v[i] = {i , s[i]};
//    }
    while (t--) {//BGGBG | GBGBG
        char a , b;
        int i = 1;
        while (i < n) {
            if (s[i-1] == 'B' && s[i] == 'G') {
                a = s[i-1] , b = s[i];
                s[i-1] = b , s[i] = a;
                i+=2;
            }else i++;
        }
    }
    cout << s;
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
    // files();
//     int t;cin >> t;
//     while (t--) {
//         solve();
//     }
    solve();
}


/*
<<<saved problems>>>

*/
