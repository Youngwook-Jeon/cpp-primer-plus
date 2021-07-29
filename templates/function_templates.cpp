#include <iostream>
#include <string>
using namespace std;

template<typename Type>
Type my_max(Type a, Type b) {
    if (a > b)
        return a;
    return b;
}

template<class Type1, class Type2>
Type1 sum(Type1 a, Type2 b) {
    Type1 r = a + b;
    return r;
}

template<class T>
T multiply(T a, int factor) {
    return a * factor;
}

// 특정 자료형은 다르게 다뤄져야 할때.
template<>
string multiply(string str, int factor) {
    string res = "";
    while (factor--)
        res += str;
    return res;
}

struct Employee {};

int main() {
    string s = "Magic";
    cout << my_max(2, 5) << "\n";
    cout << my_max<double>(2.5, 5.4) << "\n";
    cout << sum(1, 10) << "\n";
    cout << sum(1, 10.5) << "\n"; // 11
    cout << multiply(s, 4) << "\n";
    return 0;
}