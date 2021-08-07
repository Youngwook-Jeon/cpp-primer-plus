#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(10);
    q.push(30);
    cout << q.back() << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}