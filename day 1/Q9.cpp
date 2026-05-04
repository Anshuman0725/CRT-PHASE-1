#include <iostream> 
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 0)
        cout << "Invalid age";
    else if (age <= 17)
        cout << "Not eligible to vote";
    else if (age <= 99)
        cout << "Eligible to vote";
    else
        cout << "Eligible to vote 100 and more";

    return 0;
} // CRT question 9 