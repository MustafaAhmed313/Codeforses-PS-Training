#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n , m = 0 , i = 0 , j = 0 ,  x = 2;cin >> n;
        char c;cin >> c; 
        string s , ds = "";cin >> s;
        ds = s + s;
        bool f = false; 
        while (j < ds.length() && i < ds.length()) {
            if (ds[j] == c && !f) {
                i = j; 
                f = true;
            } 
            if (ds[j] == 'g' && f) {
                m = max(m , j - i);
                f = false;
            }
            j++;  
        }
        cout << m << endl;
    } 
}