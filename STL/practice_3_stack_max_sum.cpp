// 세개의 스택이 주어졌을 때, 각 스택의 원소들의 합이 서로 같아 지게 하기 
#include <iostream>
#include <vector>
using namespace std;

int sum_vec(vector<int> &a) {
    int sum = 0;
    for (auto x : a) sum += x;
    return sum;
}

int max_3stack_sum(vector<int> &a, vector<int> &b, vector<int> &c) {
    int sa = sum_vec(a), sb = sum_vec(b), sc = sum_vec(c);

    while (!a.empty() && !b.empty() && !c.empty()) {
        if (sa == sb && sb == sc) return sa;

        if (sa >= sb && sa >= sc)
            sa -= a.back(), a.pop_back();
        else if (sb >= sa && sb >= sc)
            sb -= b.back(), b.pop_back();
        else
            sc -= c.back(), c.pop_back();
    }

    return 0;
}