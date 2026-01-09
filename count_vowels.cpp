#include <iostream>
using namespace std;

int main() {
    string s = "Hello World";
    int count = 0;

    for (char c : s) {
        char l = tolower(c);
        if (l=='a' || l=='e' || l=='i' || l=='o' || l=='u')
            count++;
    }

    cout << "Vowels: " << count;
}
