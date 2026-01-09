#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {5, 2, 8, 1, 3};

    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < a.size() - 1; j++)
            if (a[j] > a[j+1])
                swap(a[j], a[j+1]);

    for (int n : a)
        cout << n << " ";
}
