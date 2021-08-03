#include <iostream>
using namespace std;

// typename ... SomeArgs: template parameter pack NOT a type
// args is called a function parameter pack
template<typename ... SomeArgs>
void Hello(SomeArgs ... args) {
    int sz = sizeof...(args);
    cout << sz << " " << __PRETTY_FUNCTION__ << "\n";
}

int Sum() {
    return 0;
}

template<typename ... Args>
int Sum(int a, Args ... args) {
    return a + Sum(args...);
}

void Print() {
    cout << "\n";
}

template<typename T, typename ... Args>
void Print(T a, Args ... args) {
    int sz = sizeof...(args);
    cout << a;
    if (sz > 0)
        cout << ", ";
    Print(args...);
}

int main() {
    // 4 void Hello(SomeArgs...) [SomeArgs = <int, int, int, int>]
    Hello(1, 2, 3, 4);
    // 3 void Hello(SomeArgs...) [SomeArgs = <const char *, int, double>]
    Hello("Young", 5, 2.5);
    Hello('c');
    Hello();

    cout << Sum(1, 2, 3, 4) << endl;

    Print(1, 2, 3, 4);
    return 0;
}