// nums 배열과 윈도우의 크기 k가 주어졌을 때, k-윈도우가 한칸씩 오른쪽으로 움직이면서 각 윈도우의 최댓값들을 계산한 결과를 담는 배열 리턴하기
#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> maxSlidingWindow1(vector<int>& nums, int k) {
    vector<int> ret;

    if ((int)nums.size() < k) return ret;

    multiset<int> st;
    for (int i = 0; i < k; i++) {
        st.insert(-nums[i]);
    }
    ret.push_back(-*st.begin());

    for (int i = k; i < (int)nums.size(); i++) {
        st.erase(st.find(-nums[i - k]));
        st.insert(-nums[i]);
        ret.push_back(-*st.begin());
    }

    return ret;
}

int main() {
    vector<int> v = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> ret = maxSlidingWindow1(v, 3);

    for (auto i : ret) {
        cout << i << ", ";
    }

    return 0;
}