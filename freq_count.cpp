#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "hello world";
    unordered_map<char, int> m;

    for (char c : s)
        m[c]++;

    for (auto &p : m)
        cout << p.first << ": " << p.second << endl;
}
