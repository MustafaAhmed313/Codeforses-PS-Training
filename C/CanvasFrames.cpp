#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int , int>sticks; //1 = 2 , 2 = 6
    int n;cin >> n;
    int stick = 0;
    for (int i = 0 ; i < n ; i++) {//1 2 2 2 3 1 1 3
        int a;cin >> a;
        sticks[a]++;
    } //1 2 1 2 2 2 2 2
    int remain = 0;//4
    for (auto e : sticks) {
        if (e.second >= 4) {
            stick += e.second/4;
            if (e.second % 4 >= 2) remain += 2;
        }
        else if (e.second >= 2) {
            remain += 2;
            if (remain >= 4) {
                stick += remain / 4;
                remain %= 4;
                if (remain >= 2) remain = 2;
                else remain = 0;
            }
        }
    }
    stick += remain / 4;
    cout << stick;
}