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
    string s1 , s2 , s3;cin >> s1 >> s2 >> s3;
    map<char , int>m1 , m2;
    for (int i = 0 ; i < s1.length() ; i++) m1[s1[i]]++;
    for (int i = 0 ; i < s2.length() ; i++) m1[s2[i]]++;
    for (int i = 0 ; i < s3.length() ; i++) m2[s3[i]]++;
    if (m1.size() != m2.size()) cout << "NO";
    else {
        bool f = false;
        for (auto e : m1)
            if (e.second != m2[e.first]) {
                f = true;
                break;
            }
        if (!f) cout << "YES";
        else cout << "NO";
    }
}

void files() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}

ll GCD(ll a,ll b) {
    if(a==0)
        return b;
    return GCD(b%a,a);
}

ll LCM(ll a,ll b) {
    return a*(b/GCD(a,b));
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
