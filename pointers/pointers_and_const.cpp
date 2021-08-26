#include <iostream>
using namespace std;

int main() {
    int val1 = 20;
    int val2 = 30;

    const int val3 = 40;
    const int *ptr1 = &val1; // *ptr1 = 20; 지칭하는 데이터의 값 변경 불가
    ptr1 = &val3; // 포인터 변수 자체의 값 변경은 가능

    int * const ptr2 = &val2; // constant pointer
    *ptr2 = 11; // ok

    const int * const ptr3 = &val1; // 그 자신, 지칭하는 대상 모두 바꿀수 없음
    return 0;
}