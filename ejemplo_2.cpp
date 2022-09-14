#include <iostream>
#include <math.h>

using namespace std;

 /*Sacar el área de un círculo pidiendo al usuario el radio.*/
int main() {
    float pi = atan(1)*4;
    int r; 
    cout << "Type radium: "; // Type a number and press enter
    cin >> r; // Get user input from the keyboard
    cout << "The area of the circle is: " << pi * pow(r, 2);; // Display the input value
}