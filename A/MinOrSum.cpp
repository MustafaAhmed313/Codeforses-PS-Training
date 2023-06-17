#include <iostream>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        int a[n];
        for (int i = 0 ; i < n ; i++) cin >> a[i];
        for (int i =1 ; i < n ; i++) a[i] = (a[i-1] | a[i]);
        cout << a[n - 1] << endl;
    }
    return 0;
}