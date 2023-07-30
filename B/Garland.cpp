#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int area = 0;
    map<char , int>n;
    map<char , int>m;
    string s1 , s2; cin >> s1 >> s2;
    for (char c :  s1) n[c]++; //a = 1 
    for (char c :  s2) m[c]++; //z = 1 
    if (m.size() > n.size()) {
        cout << -1;
        return 0;
    }
    for (auto e : m) {
        if (n[e.first] == 0) {
            cout << -1;
            return 0;
        }
    }
    for (auto e : n) area += min(e.second , m[e.first]);
    cout << area;
}
// aaabbac
// aabbccac
// a
// z