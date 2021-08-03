#include <iostream>
using namespace std;

struct antarctica_years_end
{
    int year;
};

int main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 2021;
    antarctica_years_end * pa = &s02;
    pa->year = 2020;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    cout << trio->year << endl; // 2003
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << arp[1]->year << endl; // 2020
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp; // C++ 11 자동 형태 추측
    cout << (*ppa)->year << endl; //2021
    cout << (*(ppb + 1))->year << endl; // 2020
    return 0;
}