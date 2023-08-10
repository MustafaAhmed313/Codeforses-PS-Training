#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        map<int , vector<int>> m;
        for (int i = 0 ; i < n ; i++) {
            int a;cin >> a;m[a].push_back(i);
        }
        for (auto e : m) {
            if (e.second.size() == 1) {
                cout << e.second[0] + 1 << endl;
                break;
            }
        }
        m.clear();
    }
}
