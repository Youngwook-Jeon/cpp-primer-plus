#include <iostream>
#include <vector>
#include <map>
using namespace std;

void print(const map<string, int> &mp) {
    for (const pair<string, int> &item : mp) {
        cout << item.first << "-" << item.second << " | ";
    }
    cout << "\n";
}

int main() {
    map<string, int> mp;
    mp["mayer"] = 10;
    mp["young"] = 20;
    mp["mayer"] = 30;
    print(mp);

    auto it = mp.find("mayer");

    if (it != mp.end())
        mp.erase(it);
    print(mp);

    map<char, vector<int> > my_data;
    vector<int> x;
    x.push_back(1);
    x.push_back(2);
    x.push_back(3);

    my_data['A'] = x;
    x.push_back(4);
    cout << my_data['A'].size() << endl; // 3
    cout << x.size() << endl; // 4
    vector<int> x2 = my_data['A']; // 3rd copy
    vector<int> &x3 = my_data['A']; // SAME memory

    return 0;
}