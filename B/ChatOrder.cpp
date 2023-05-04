//
// Created by Mostafa on 5/4/2023.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main() {
    int n;cin >> n;
    map<string , int> m;
    for (int i = 0 ; i < n ; i++) {
        string person; cin >> person;
        m[person]++;
    }
}