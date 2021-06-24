// new 연산자 사용하기
#include <iostream>

int main() 
{
    using namespace std;
    int nights = 1001;
    int * pt = new int; // int 형을 저장할 메모리를 대입
    *pt = 1001; // 대입된 메모리에 값을 저장

    cout << "nights: ";
    cout << nights << ": 메모리 위치 " << &nights << endl;
    cout << *pt << ": 메모리 위치 " << pt << endl;

    cout << "pt의 크기: " << sizeof(pt);
    cout << "/ *pt의 크기: " << sizeof(*pt) << endl;
    delete pt; // new 로 대입한 메모리를 해제하기, new 와 delete는 한 쌍
    return 0;
}