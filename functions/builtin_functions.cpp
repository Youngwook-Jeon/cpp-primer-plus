#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    cout << abs(-2) << "\n";
    cout << fabs(-2.4) << "\n";
    cout << ceil(2.4) << "\n"; // 3
    cout << floor(2.4) << "\n"; // 2
    cout << round(2.5) << "\n";
    cout << sqrt(16) << "\n";

    cout << isalpha('A') << "\n";
    cout << isalpha('#') << "\n";
    cout << isdigit('3') << "\n"; // 1 = true
    cout << isupper('A') << "\n";
    cout << (char)tolower('X') << "\n";

    cout << max(5, 9) << "\n";
    cout << pow(2, 4) << "\n"; // 16
    cout << log2(16) << "\n"; // 4
    cout << (double)rand() / RAND_MAX << "\n";

    return 0;
}