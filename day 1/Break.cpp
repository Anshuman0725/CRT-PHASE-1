#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    while (true) {
        cin >> num;

        if (num < 0)
            break;   // terminate loop on negative input

        sum += num;  // add positive number to sum
    }

    cout << "Final Sum = " << sum;

    return 0;
}// CRT question 13