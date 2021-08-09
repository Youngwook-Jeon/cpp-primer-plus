#include <iostream>
#include <string>
using namespace std;

int main() {
    string test = "hi abc abc abc abc";
    cout << test.substr(3) << endl;
    cout << test.substr(3, 5) << endl;
    cout << test.find("abc") << endl;

    // starting the search at 6th character
    cout << test.find("abc", 5) << endl;
    cout << (int)test.find("young") << endl;

    // functions that search for a CHARACTER from a given string
    cout << test.find_last_of("cab") << "\n";
    cout << test.find_first_not_of("aic") << "\n";

    // replace from 4, 3 chars with x
    test.replace(4, 3, "x");
    cout << test << "\n"; // hi axabc abc abc
    return 0;
}