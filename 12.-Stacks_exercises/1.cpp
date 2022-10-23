#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

 /*1.   Hacer un programa para agregar números enteros a una pila, hasta que el usuario lo
decida, después, mostrar todos los números introducidos en la pila.*/


int main() {
    stack<int> newstack;
    bool isUserDone = false;
    string x = "0";
    int y = 0;
    while (!isUserDone) {
        cout << "\n(Type a number to add to stack:\n\n"; // Type a number and press enter
        cin >> x;
        try {
            y = stoi(x);
            newstack.push(y);
        }
        catch (invalid_argument &e) {
            isUserDone = true;
        }
    };
    // Print stack result
    while (!newstack.empty()) {
        cout <<  newstack.top() << " ";
        newstack.pop();
    }
    cout << "\n";
    return 0;
}