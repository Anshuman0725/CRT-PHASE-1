#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* ptr = &a;   // address 

    cout << ptr << endl;   // prints address of a

    return 0;
}