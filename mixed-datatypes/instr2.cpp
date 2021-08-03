// getline() 함수 사용하기
// getline은 Enter키에 의해 전달되는 개행 문자를 입력의 끝으로 간주하여 한 행 전체를 읽음
// getline(입력한 행을 저장할 배열 이름, 입력받을 문자들의 한계)
// getline은 한계에 도달하거나 한계 이전이라도 개행 문자를 읽으면 읽기를 중단함
#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    cout << "이름을 입력하세요:\n";
    cin.getline(name, ArSize);
    cout << "좋아하는 디저트를 입력하세요:\n";
    cin.getline(dessert, ArSize);
    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";
    return 0;
}