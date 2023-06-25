#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n , i , start = 0 , end = 0;cin >> n;
        char c;cin >> c;
        string s;cin >> s;
        i = 0;
        while (s[i] != 'g') i++;
        start = i;
        i = n - 1;
        while (s[i] != 'g') i--;
        end = i;
        cout << n - ((end - start) + 1) << endl;
    }
}
/*
 * 6
5 r
rggry >> 3
1 g
g >> 0
3 r
rrg >> 2
5 y
yrrgy >> 4
7 r
rgrgyrg >> 1
9 y
rrrgyyygy >> 4

 */