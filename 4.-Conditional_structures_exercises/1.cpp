#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*1.   Realizar un programa que lea un valor entero y determine si se trata de un número par
o impar*/

bool isPair(int n) {
    if (n % 2 == 0) {
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
    if (isPair(x)) {
        cout << "\nNumber " << x << " is pair.\n";
    }
    else {
        cout << "\nNumber " << x << " is odd.\n";
    }
}