#include <iostream>
#include <set> // 중복된 원소를 사용할 수 있는 것은 multiset
#include <tuple>
using namespace std;

void print(set<string> &v) {
    for (string x : v)
        cout << x << " ";
    cout << "\n";
}

struct employee {
    int num1, num2;
    string str;

    employee(int a, int b, string name) {
        num1 = a, num2 = b, str = name;
    }

    bool operator <(const employee& rhs) const {
        // compare as we did before
        if (false) {
            if (num1 != rhs.num1)
                return num1 < rhs.num1;
            if (str != rhs.str)
                return str < rhs.str;
            return num2 < rhs.num2;
        }
        if (false) {
            // or use pair
            return make_pair(num1, make_pair(str, num2)) < make_pair(rhs.num1, make_pair(rhs.str, rhs.num2));
        }

        // To use tie: must be variables
        return std::tie(num1, str, num2) < std::tie(rhs.num1, rhs.str, rhs.num2);
    }
};

int main() {
    set<string> strSet;
    strSet.insert("mayer");
    strSet.insert("young");
    strSet.insert("young");
    strSet.insert("young");
    strSet.insert("jeon");

    print(strSet);

    if (strSet.count("mayer"))
        cout << "YES\n";
    
    set<string>::iterator it = strSet.find("young");

    if (it != strSet.end())
        strSet.erase(it);
    print(strSet);

    set<employee> s;
    s.insert(employee(10, 35, "mayer"));
    s.insert(employee(7, 15, "young"));
    s.insert(employee(10, 17, "jeon"));

    for (auto emp : s) {
        cout << emp.num1 << " " << emp.str << " " << emp.num2 << endl;
    }

    return 0;
}