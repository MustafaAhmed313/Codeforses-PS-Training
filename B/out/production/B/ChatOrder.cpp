//
// Created by Mostafa on 5/4/2023.
//
#include <iostream>
#include <vector>
#include <map>
using namespace std;
//bool canPartitionKSubsets(vector<int>& nums, int k) {
//    map<int , int> m;
//    for (int i = 0 ; i < (1 << nums.size()) ; i++) { //4,3,2,3,5,2,1
//
//        int sum = 0;
//        for (int j = 0 ; j < nums.size() ; j++)
//            if ((1 << j) & i) sum += nums[j];
//        m[sum]++;
//    }
//    for (auto e : m)
//        if (e.second % k == 0) return true;
//    return false;
//}
int main() {
    int t;cin >> t;

    for (int i = 0 ; i < t ; i++) {
        map<string , int>m;
        m["00"] = m["10"] = m["01"] = m["11"] = 1e9;
        int n;cin >> n;
        for (int j = 0 ; j < n ; j++) {
            int minute;cin >>minute;
            string skill;cin >> skill;
            m[skill] = min(minute , m[skill]);
        }
        if (min(m["11"] , m["10"] + m["01"]) > (int) 1e6) cout << "-1" << endl;
        else cout << min(m["11"] , m["10"] + m["01"]) << endl;
    }
    return 0;
}