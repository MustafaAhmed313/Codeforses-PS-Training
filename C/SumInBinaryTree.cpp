#include <iostream>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        long long n , sum = 0;cin >> n;
        while (n) {
            sum += n;
            n /= 2;
        }
        cout << sum << endl;
    }
}