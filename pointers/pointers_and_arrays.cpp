#include <iostream>
using namespace std;

int main() {
    int arr[] {3, 5, 7, 9};
    int *ptr = arr;
    cout << *ptr << endl;

    ++ptr; // move to next memory cell
    cout << *ptr << endl; // 5
    cout << *ptr++ << endl; // 5
    cout << *++ptr << endl; // 9
    cout << *ptr << endl; // 9
    cout << *--ptr << endl; // 7
    cout << *ptr << endl; // 7
    ptr -= 2;
    cout << *ptr << endl; // 3

    return 0;
}