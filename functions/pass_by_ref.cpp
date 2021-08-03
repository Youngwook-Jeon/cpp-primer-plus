#include <iostream>
#include <string>
using namespace std;

void change(int a, int &b) {
    a++;
    b++;
}

void read(int x, int &y, string &str) {
    cin >> x >> y >> str;
}

int main() {
    int a = 1, b = 1;
    change(a, b);
    cout << a << " " << b << "\n"; // 1 2

    string name;
    read(a, b, name); // 10 20 young
    cout << a << " " << b << " " << name << "\n"; // 1 20 young

    return 0;
}