#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main() {
    tuple<char, int, string> tl;
    tl = make_tuple('c', 10, "young");

    cout << get<0>(tl) << " " << get<1>(tl) << endl; // c 10
    get<0>(tl) = 'd';

    cout << (tl <= tl) << endl; // 1

    char ch;
    int val;
    string name;

// tie unpack the tuple values into separate variables
    tie(ch, val, name) = tl;
    cout << name << endl;
    auto t2 = tuple_cat(tl, make_tuple(10.6));
    cout << get<0>(t2) << get<1>(t2) << get<2>(t2) << get<3>(t2) << endl; // d10young10.6

    return 0;
}