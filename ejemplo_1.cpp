#include <iostream>
using namespace std;

 /*Sacar el área de un rectángulo pidiendo al usuario la base y la altura del mismo.*/
int main() {
    int x; 
    cout << "Type base: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    int y;
    cout << "Type height: "; // Type a number and press enter
    cin >> y; // Get user input from the keyboard
    cout << "The area of the triangle is: " << x * y / 2; // Display the input value
}