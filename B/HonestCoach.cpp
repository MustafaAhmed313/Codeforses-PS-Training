#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        long long n;cin >> n;
        long long a[n];
        for (int i= 0 ; i < n ; i++) cin >> a[i];
        sort(a , a+n);
        long long mini = LONG_LONG_MAX;
        for (int i = 1 ; i < n ; i++) mini = min(mini , abs(a[i] - a[i-1]));
        cout << mini << endl;
    }
}