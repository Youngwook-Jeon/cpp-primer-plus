// 배열을 위해 new 연산자 사용하기
#include <iostream>

int main()
{
    using namespace std;
    double * p3 = new double[3]; //p3를 배열 이름처럼 취급
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    p3 = p3 + 1; //포인터 증가시키기, 포인터가 아닌 배열이름이었으면 잘못된 문법
    cout << "이제 p3[0]가 " << p3[0] << "이고, "; // 0.5
    cout << "p3[1]이 " << p3[1] << "입니다.\n"; // 0.8
    p3 = p3 - 1; //다시 시작위치를 지시
    delete [] p3;
    return 0;
}