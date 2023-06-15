#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int t , n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a;
        map<int , int>m;
        for (int i = 0 ; i < n ; i++) {
            cin >> a;
            m[a]++;
        }
        int l = m.size() , k = n - m.size() , c = m.size();
        while (l--) cout << m.size() << " ";
        while (k--) cout << ++c << " ";
        cout << endl;
    }   
}