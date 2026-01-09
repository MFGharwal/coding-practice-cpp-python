#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {4, 2, 9, 1, 7};

    int mn = arr[0], mx = arr[0];
    for (int n : arr) {
        mn = min(mn, n);
        mx = max(mx, n);
    }

    cout << "Min: " << mn << ", Max: " << mx;
}
