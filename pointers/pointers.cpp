#include <iostream>
#include <vector>
using namespace std;

int main() {
    double x = 10;
    double *ptr1 = &x;

    string str = "young";
    string *ptr2 = &str;
    *ptr2 = "mayer";
    cout << str << endl; // mayer

    vector<int> v {5, 6, 7};
    vector<int> *ptr3 = &v;
    *ptr3 = vector<int> (10);
    cout << v.size() << endl; // 10

    int y = 20;
    int *p1 = &y;
    int *p2 = p1;
    cout << p2 << " " << p1 << " " << *p2 << endl; // 0x7ffee2f0974c 0x7ffee2f0974c 20

    return 0; 
}