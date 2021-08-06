#include <iostream>
using namespace std;

template<typename ...Args>
auto sum_unary_right_fold(Args...args) {
    return (args + ...);

    // Expansion (args + ...) for (1, 2, 3, 4)
    // (1 + ...) => replace ... with remaining (args + ...)
    // (1 + (2 + ...))
    // ....
    // (1 + ( 2 + (3 + 4))
}

template<typename...Args>
auto sum_binary_right_fold(Args...args) {
    return (args + ... + 0);
}

// we can pass other parameters
// but make ...args the right most param
template<typename Function, typename ...Args>
auto sum_square(Function op, Args...args) {
    return (op(args) + ... + 0);
}

int sq(int x) {
    return x * x;
}

template<typename...Args>
bool all(Args ...args) {
    return (... && args);
}

template<typename...Args>
bool any(Args ...args) {
    return (... || args);
}

int main() {
    int xr = sum_unary_right_fold(1, 2, 3, 4); // 10
    cout << xr << endl;
    cout << sum_square(sq, 1, 2, 3, 4) << endl;
    cout << all() << endl; // 1
    cout << any() << endl; // 0
    return 0;
}