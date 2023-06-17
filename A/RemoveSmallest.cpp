#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() { 
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        int a[n];
        for (int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a , a+n);
        bool flag = false;
        for (int i = 1 ; i < n ; i++) { 
            if (abs(a[i] - a[i-1]) > 1) {
                flag = true;
                break;
            }
        }
        if (!flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}