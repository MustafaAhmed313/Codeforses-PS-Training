//
// Created by Mostafa on 5/6/2023.
//
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    int t;cin >> t;
    for (int i = 0 ; i < t ; i++) {
        map<string , int>m;
        m["00"] = m["10"] = m["01"] = m["11"] = 1e9;
        int n;cin >> n;
        for (int j = 0 ; j < n ; j++) {
            int minute;cin >>minute;
            string skill;cin >> skill;
            m[skill] = min(minute , m[skill]);
        }
        if (min(m["11"] , m["10"] + m["01"]) > (int) 1e6) cout << -1 << endl;
        else cout << min(m["11"] , m["10"] + m["01"]) << endl;
    }
    return 0;
}

