#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    string rev = string(s.rbegin(), s.rend());
    if (s == rev) cout << "Palindrome";
    else cout << "Not palindrome";
}
