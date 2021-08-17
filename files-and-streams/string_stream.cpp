#include <iostream>
#include <sstream> // istringstream ostringstream
using namespace std;

int main() {
    string str = "mayer 16 days";
    istringstream iss(str);

    string name;
    int day;
    iss >> name >> day;
    cout << day << "\n"; // 16

    ostringstream oss;
    oss << "Young ";
    oss << 50;
    oss << " years old\n";
    cout << oss.str();

    return 0;
}