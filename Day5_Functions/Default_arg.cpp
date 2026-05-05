#include <iostream>
using namespace std;

// Function with default argument
int add(int a, int b = 10) {
    return a + b;
}

int main() {
    // Calling with both parameters
    cout << "With parameter: " << add(5, 20) << endl;

    // Calling with one parameter (default value used)
    cout << "Without parameter: " << add(5) << endl;

    return 0;
}