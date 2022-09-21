#include <iostream>

using namespace std;

 /*1. Escribir un programa que realice las siguientes operaciones:
a. Op1: (a/b)+1
b. Op2: (a+b)/(c+d)
c. Op3: a+(b/(c-d))
El programa debe pedir al usuario los números y la operación a realizar*/


float op1(float a, float b) {
    return a / b + 1;
}


float op2(float a, float b, float c, float d) {
    return (a + b) / (c + d);
}


float op3(float a, float b, float c, float d) {
    return a + (b / (c - d));
}


int main() {
    cout << "a)\t(a/b)+1\n";
    cout << "b)\t(a+b)/(c+d)\n";
    cout << "c)\ta+(b/(c-d))\n";
    string op; 
    cout << "Type a, b or c:\n"; // Type a number and press enter
    cin >> op; // Get user input from the keyboard
    if (op == "a") {
        float a;
        float b;
        cout << "\nType a:\n"; // Type a number and press enter
        cin >> a; // Get user input from the keyboard
        cout << "\nType b:\n"; // Type a number and press enter
        cin >> b; // Get user input from the keyboard
        cout << "\nResult:\t" << op1(a, b) << "\n";
        return 0;
    }
    else if (op == "b") {
        float a;
        float b;
        float c;
        float d;
        cout << "\nType a:\n"; // Type a number and press enter
        cin >> a; // Get user input from the keyboard
        cout << "\nType b:\n"; // Type a number and press enter
        cin >> b; // Get user input from the keyboard
        cout << "\nType c:\n"; // Type a number and press enter
        cin >> c; // Get user input from the keyboard
        cout << "\nType d:\n"; // Type a number and press enter
        cin >> d; // Get user input from the keyboard
        cout << "\nResult:\t" << op2(a, b, c, d) << "\n";
        return 0;
    }
    else if (op == "c") {
        float a;
        float b;
        float c;
        float d;
        cout << "\nType a:\n"; // Type a number and press enter
        cin >> a; // Get user input from the keyboard
        cout << "\nType b:\n"; // Type a number and press enter
        cin >> b; // Get user input from the keyboard
        cout << "\nType c:\n"; // Type a number and press enter
        cin >> c; // Get user input from the keyboard
        cout << "\nType d:\n"; // Type a number and press enter
        cin >> d; // Get user input from the keyboard
        cout << "\nResult:\t" << op3(a, b, c, d) << "\n";
        return 0;
    }
    else {
        cout << "Invalid operation";
        return 1;
    }
}