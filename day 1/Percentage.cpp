#include <iostream>
using namespace std;

int main() {
    int per;
    cin >> per;

    if (per < 0 || per > 100)
        cout << "Invalid percentage";
    else if (per >= 90)
        cout << "Grade A";
    else if (per >= 80)
        cout << "Grade B";
    else if (per >= 70)
        cout << "Grade C";
    else if (per >= 60)
        cout << "Grade D";
    else
        cout << "Fail";

    return 0;
}// CRT question 14 