#include <iostream>

using namespace std;

int main() {
    int n , cnt = 0;cin >> n;
    while (n) {
        if (n >= 100) n -= 100;
        else if(n >= 20) n -= 20;
        else if(n >= 10) n -= 10;
        else if(n >= 5) n -= 5;
        else n -= 1;
        cnt++;
    }
    cout << cnt;
}