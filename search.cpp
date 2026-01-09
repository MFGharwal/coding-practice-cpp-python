#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,3,5,7,9};
    int target = 7;

    for (int n : arr)
        if (n == target) {
            cout << "Found";
            return 0;
        }

    cout << "Not found";
}
