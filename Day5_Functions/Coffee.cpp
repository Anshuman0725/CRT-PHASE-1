#include <iostream>
using namespace std;

// Function to calculate total coffee volume
int calculateVolume(int shots) {
    return shots * 30;
}

int main() {
    int shots;

    cout << "Enter number of coffee shots: ";
    cin >> shots;

    int totalVolume = calculateVolume(shots);

    cout << "Total coffee volume = " << totalVolume << " ml" << endl;

    return 0;
}
