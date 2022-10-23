#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

 /*2.   Hacer un programa utilizando pilas que contenga el siguiente menú:
a. Insertar un carácter a la pila
b. Mostrar todos los elementos de la pila
c. Salir*/

enum Options {
    a,
    b,
    c,
    Option_Invalid,
    //others...
};

Options resolveOption(std::string input) {
    if( input == "a" ) {
      return a;
    }
    if( input == "b" ) {
      return b;
    }
    if( input == "c" ) {
      return c;
    }
    return Option_Invalid;
}
int main() {
    string input;
    stack<char> newstack;
    bool isUserDone = false;

    while (!isUserDone) {
        char x;

        cout << "\nMenu:\n";
        cout << "a. Insert character to the pile\n";
        cout << "b. Show all elements of the pile (This will destroy the pile)\n";
        cout << "c. Exit\n";
        cin >> input;
        switch (resolveOption(input)) {
          case a:
            cout << "\n(Type a character to add to stack:\n\n"; // Type a number and press enter
            cin >> x;
            newstack.push(x);
            cout << "Character " << x << " inserted to pile";
            break;
          case b:
            cout << "Showing all elements of the pile:\n";
            while (!newstack.empty()) {
                cout <<  newstack.top() << " ";
                newstack.pop();
            }
            cout << "\n";
            break;
          case c:
            cout << "Exiting...\n";
            isUserDone = true;
            break;
          case Option_Invalid:
            cout << "Invalid menu option\n";
            break;
        }
    }
    return 0;
}