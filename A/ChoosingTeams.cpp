#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n , k , lim , p = 0; cin >> n >> k;
    lim = 5 - k;
    for (int i = 0 ; i < n ; i++) {
        int a;cin >> a;
        if (a <= lim) p++;
    }
    cout << p/3;
    return 0;
}