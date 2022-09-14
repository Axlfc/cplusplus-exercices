#include <iostream>
#include<conio.h>

using namespace std;

 /* Sacar de un listado (dado por el usuario) el número más pequeño y el mayor. */
int main() {
    // declaring myList array in C
    int myList[10];
    int maxValue = -2147483647;
    int minValue = 2147483647;
    int valueTemp;

    int i; // Variable for access myList array index
    // Read User Input into Array

    for (i = 0; i < 10; i++) {
        // Reading User Input myList value Based on index
        cout << "Enter Value for Position " << i << " : ";
        cin >> myList[i];
    }

    // User Input Values
    for (i = 0; i < 10; i++) {
        // Accessing myList value using for loop
        valueTemp = myList[i];
        if (maxValue < valueTemp) {
            maxValue = valueTemp;
        }
        if (minValue > valueTemp) {
            minValue = valueTemp;
        }
    }

    // getch();

    cout << "\n Max Value : " << maxValue << "\n";
    cout << "\n Min Value : " << minValue << "\n";

    return 0;

}