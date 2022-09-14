#include <iostream>
using namespace std;

 /*El usuario introduce 2 números. El segundo va restando al primero siempre que el resultado sea mayor que 0.*/
int main() {
    int x; 
    cout << "Type number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    int y;
    cout << "Type 2nd number: "; // Type a number and press enter
    cin >> y; // Get user input from the keyboard
    while (x > 0) {
        x = x - y;
        cout << "The result is: " << x << "\n"; // Type a number and press enter
    }
}