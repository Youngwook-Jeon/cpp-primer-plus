#include <iostream>
#include <string>
using namespace std;

struct SpecialName {
    string name = "mayer";
    string& get_name() {
        return name;
    }
    void print() {
        cout << name << "\n";
    }
};

int main() {
    SpecialName my_name;
    my_name.print();

    string &str = my_name.get_name();
    str = "young";
    my_name.print(); // young

    my_name.get_name() = "jeon";
    my_name.print(); // jeon
    return 0;
}
