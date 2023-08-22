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
    /*  5 3
     *  ###
        ..#
        ###
        #..
        ###
     * */
    int n , m;cin >> n >> m;
    for (int i = 0 ; i < n ; i++) {
        if (i % 2 == 0) {
            for (int j = 0 ; j < m ; j++) cout << "#";
        }else {
            if ((i + 1) % 4 == 0){
                cout << "#";
                for (int k = 0 ; k < m-1 ; k++) cout << ".";
            }else {
                for (int k = 0 ; k < m-1 ; k++) cout << ".";
                cout << "#";
            }
        }
        cout << endl;
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
