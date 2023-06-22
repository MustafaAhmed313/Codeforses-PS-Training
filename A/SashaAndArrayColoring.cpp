#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        int a[n];
        for (int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a , a+n);
        if (n == 0) {
            cout << 0 << endl;
        }else {
            int cost = 0;
            for (int i = 0 , j = n - 1 ; i < n/2 ; i++ , j--)
                cost += (max(a[j] , a[i]) - min(a[j] , a[i]));
            cout << cost << endl;
        }
    }
}