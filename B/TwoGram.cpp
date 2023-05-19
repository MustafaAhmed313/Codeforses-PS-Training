#include <iostream>
#include <string>
#include <map>

using namespace std;

string substring(string s , int begin , int end) {
    string a = "";
    for (int i = begin ; i < end ; i++) a += s[i];
    return a;
}

int main() {

    int n;cin >> n;
    string s;cin >> s;
    map<string , int>m;

    for (int i = 0 ; i < s.length() - 1 ; i++) m[substring(s , i , i + 2)]++;
    int max = 0 ; string sm;
    for (auto e : m)
        if (e.second > max) {
            max = e.second;
            sm = e.first;
        }
    cout << sm; 

    return 0;
}