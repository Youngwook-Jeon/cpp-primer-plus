// 괄호들로 이루어진 문자열이 가능한 괄호들의 문자열인지 여부를 체크하기
#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool isValid(string s) {
    map<char, char> mp;
    mp[')'] = '(';
    mp[']'] = '[';
    mp['}'] = '{';

    stack<char> par;

    for (char ch : s) {
        if (mp.count(ch)) {
            if (par.empty()) return false;

            char open = mp[ch];
            char cur_open = par.top();

            if (open != cur_open) return false;
            par.pop();
        } else {
            par.push(ch);
        }
    }
    return par.empty();
}

int main() {
    cout << isValid("(()[][]{})[{}]") << endl;
    return 0;
}