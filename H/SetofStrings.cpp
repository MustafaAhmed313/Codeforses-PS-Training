#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int k;cin >> k;
    string s;cin >> s;
    map<char , int> m;
    for (auto c : s) m[c]++;
    if (m.size() < k) cout << "NO";
    else { //aaacas
        cout << "YES" << endl;
        int i , start = 0 , end = 0;
        for (i = 1 ; i < s.length() && k != 1 ; i++) {
            if (s[i] != s[start] && m[s[i]] != 0) {
                m[s[start]] = 0;
                end = i;
                cout << s.substr(start , end - start) << endl;
                start = i;
                k--;
            }
        }
        cout << s.substr(start);
    }
    return 0;
}
