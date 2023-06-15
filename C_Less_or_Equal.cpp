#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n , k;cin >> n >> k;
    int a[n];
    for (int i = 0 ; i <= n ; i++) cin >> a[i];
    sort(a , a+n);
    if (k == 0 && a[k] != 1) cout << 1;
    else if (k == 0 && a[k] == 1) cout << -1;
    else if (a[k] == a[k-1]) cout << -1;
    else cout << a[k-1];
    
    return 0;
}