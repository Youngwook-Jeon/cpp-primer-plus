#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test() {
    vector<int> v {3, -4, 7, -2, -1, 3, -5, 10, 3};
    auto it = find(v.begin(), v.end(), -2);

    if (it != v.end()) {
        vector<int> v2 {8, 9, 10};
        v.insert(it, v2.begin(), v2.end());
    } 

    for (auto &val : v) {
        cout << val << " ";
    }
}

int main() {
    test(); // 3 -4 7 8 9 10 -2 -1 3 -5 10 3
    return 0;
}