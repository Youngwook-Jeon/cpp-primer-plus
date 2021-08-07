#include <iostream>
#include <queue>
using namespace std;

void print(priority_queue<int> &pq) {
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";
}

int main() {
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(1);
    pq.push(7);
    pq.push(0);
    
    print(pq); // 7 5 3 1 0 
    return 0;
}