// get() 사용하기
// getline과 비슷하나, 이 함수는 개행문자를 읽어서 버리지 않고 입력 큐에 그래도 남겨둠
#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    cout << "이름을 입력하세요:\n";
    cin.get(name, ArSize).get();
    cout << "좋아하는 디저트를 입력하세요:\n";
    cin.get(dessert, ArSize).get();
    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
    return 0;
}