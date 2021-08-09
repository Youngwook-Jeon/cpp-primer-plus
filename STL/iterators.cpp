#include <iostream>
#include <deque>
using namespace std;

void print_front(deque<int> &q) {
    // can not iterate on stack, queue, priority_queue
    deque<int>::iterator it = q.begin(); // q.begin() is pointing to the begin
    while (it != q.end()) { // q.end() = AFTER the content
        cout << *it << " ";
        ++it;
    }
    cout << "\n";
}

void print_back(deque<int> &q) {
    for (auto it = q.rbegin(); it != q.rend(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
}

void print_front_const(deque<int> &q) {
    deque<int>::const_iterator it = q.cbegin();

    while (it != q.cend()) {
        cout << *it << " ";
        // *it = 10; // cant - const
        ++it;
    }
    cout << "\n";
}

int main() {
    deque<int> q {1, 2, 3, 4, 5};
    print_front(q);
    print_back(q);
    print_front_const(q);
    return 0;
}