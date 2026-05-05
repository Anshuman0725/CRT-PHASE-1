#include <iostream>
using namespace std;

int main() {
    int shots;
    
    cout << "Enter number of coffee shots: ";
    cin >> shots;

    int totalVolume = shots * 30;

    cout << "Total coffee volume = " << totalVolume << " ml" << endl;

    return 0;
}