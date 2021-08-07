#include <iostream>
#include <deque>
using namespace std;

void print_back(deque<int> q) {
    while (!q.empty()) {
        cout << q.back() << " ";
        q.pop_back();
    }
    cout << "\n";
}

int main() {
    deque<int> q;
    q.push_back(20);
    q.push_back(30);
    q.push_front(10);
    print_back(q);

    cout << q[1] << endl;
    cout << q.at(1) << endl;
    // cout << q.at(1000) << endl; // throws std::out_of_range exception
    q.clear();
    cout << q.size() << endl;
    return 0;
}