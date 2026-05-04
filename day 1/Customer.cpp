#include <iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Customer Support";
            break;
        case 2:
            cout << "Billing";
            break;
        case 3:
            cout << "Technical Support";
            break;
        case 4:
            cout << "Speak to Agent";
            break;
        default:
            cout << "Invalid Option";
    }

    return 0;
}