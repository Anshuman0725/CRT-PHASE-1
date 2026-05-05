#include <iostream>
using namespace std;

// Function to swap using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    swap(&x, &y);  // passing addresses

    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}