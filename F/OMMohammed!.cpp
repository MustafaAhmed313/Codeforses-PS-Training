#include <iostream>
#include <cmath>
 
using namespace std;

int main() {
    long long n , m;cin >> n >> m;
    if (n > 0) {
        if (n % m == 0) cout << abs(n - m);
        else cout << n - (n % m);
    }else {
        if (n == 0) cout << m;
        else if (abs(n) == m) cout << 2 * m;
        else cout << (abs(n) + m) - (abs(n) % m);
    }
    return 0;
}


//n = 16 , m = 4
//n = 5 , m = 5