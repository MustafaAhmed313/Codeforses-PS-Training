//
// Created by Mostafa on 5/4/2023.
//
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    int n;cin >> n;
    string s;cin >> s;
    if (n < 26) {
        cout << "NO" << endl;
        return 0;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower)

}
