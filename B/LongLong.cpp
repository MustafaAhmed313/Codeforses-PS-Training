#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        long long sum = 0;
        long long a[n];
        for (int i = 0 ; i < n ; i++) {
            cin >> a[i];
            sum += abs(a[i]);
        }
        int count = 0;
        for (int i = 0 ; i < n ;) {
            if (a[i] < 0) {
                while (a[i] <= 0) i++;
                count++;
            }else i++;
        }
        cout << sum << " " << count << endl; 
    }
}