#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 18)
        cout << "Eligible to vote";
    else
        cout << "Cannot vote";

    return 0;
} // CRT question 8 