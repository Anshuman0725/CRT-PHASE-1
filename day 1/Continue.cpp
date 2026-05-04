#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            continue;   // skip multiples of 3
        } else {
            cout << i << " ";
        }
    }

    return 0;
} // CRT question 12