#include <iostream>
using namespace std;

// Tip:
// 1. 포인터를 초기화하지 않은 상태로 두지말라. 적어도 널 포인터를 할당하라
// 2. 포인터를 삭제할때마다 널 포인터로 할당하라
// 3. 포인터를 삭제하기 전 자주 발생하는 실수를 저질렀는지 확인하라 (ex: 포인터 두번 삭제, 삭제된 메모리에 접근, 초기화 안된 변수에 접근 등등)
int main() {
    const int SIZE = 10;
    int arr1[SIZE] {0};

    int n = 20;
    int *pArr = new int[n];

    for (int i = 0; i < n; i++) {
        pArr[i] = i;
    }
    n = 30;
    for (int i = 0; i < n; i++) {
        cout << pArr[i] << ", "; // 20번째 이상부터 가비지 값이 들어있음
    }

    delete[] pArr;
    return 0;
}