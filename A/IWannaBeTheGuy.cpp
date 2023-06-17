#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int , int>m;
    int n;cin >> n;
    int p;cin >> p;
    for (int i = 0 ; i < p ; i++) {
        int a;cin >> a;
        m[a]++;
    }
    int q;cin >> q;
    for (int i = 0 ; i < q ; i++) {
        int a;cin >> a;
        m[a]++;
    }
    for (int i = 1 ; i <= n ; i++) {
        if (m[i] == 0) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}