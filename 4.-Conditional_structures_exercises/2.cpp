#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*2.   Escribir un programa que identifique si el número introducido es positivo o negativo.*/

bool isPositive(int n) {
    if (n > 0) {
        return true; 
    }
    else {
        return false;
    }
}

int main() {
    int x;
    cout << "\nType number:\n\n"; // Type a number and press enter
    cin >> x;

    if (x == 0) {
        cout << "\nNumber " << x << " is zero.\n";
    }
    else {
        if (isPositive(x)) {
            cout << "\nNumber " << x << " is positive.\n";
        }
        else {
            cout << "\nNumber " << x << " is negative.\n";
        }
    }
}