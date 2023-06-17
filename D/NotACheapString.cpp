#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        string str , s = "" , s1 = "" , s2 = "";cin >> str;
        int p;cin >> p;
        s = str;sort(s.begin() , s.end());
        int cost = 0 , c1 = 0 , c2 = 0;
        map<char , int>m1;
        map<char , int>m2;
        for (int i = 0 ; i < str.length() ; i++) {
            m1[s[i]]++;m2[s[i]]++;cost += ((s[i] - 'a')+1);
        }
        c1 = c2 = cost;
        int cnt1 = 0;
        for (int i = 0 ; i < s.length() ; i++) {
            if (c1 > p) {
                m1[s[i]]--;
                cnt1++;
                c1 -= ((s[i] - 'a')+1);
            }else break;
        }
        int cnt2 = 0;
        for (int i = s.length() - 1 ; i >= 0 ; i--) {
            if (c2 > p) {
                m2[s[i]]--;
                cnt2++;
                c2 -= ((s[i] - 'a')+1);
            }else break;
        }
        if (cnt1 < cnt2) {
            for (int i = 0 ; i < str.length() ; i++) {
                if (m1[str[i]] > 0) {
                    m1[str[i]]--;
                    s1 += str[i];
                } 
            }
            cout << s1 << endl;
        }else {
            for (int i = 0 ; i < str.length() ; i++) {
                if (m2[str[i]] > 0) {
                    m2[str[i]]--;
                    s2 += str[i];
                } 
            }
            cout << s2 << endl;
        }   
    }
}