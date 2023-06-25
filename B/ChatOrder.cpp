#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;cin >> n;
    vector<string> v(n);
    map<string , bool> m;
    for (int i = 0 ; i < n ; i++) { //alex ivan roman ivan
        string s;cin >> s;
        m[s] = true;
        v[n-(i+1)] = s; // ivan , roman , ivan , alex
    }
    for (int i = 0 ; i < n ; i++) {
        if (m[v[i]] == true) {
            cout << v[i] << endl;
            m[v[i]] = false;
        }
    }
}