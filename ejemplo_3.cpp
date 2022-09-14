#include <iostream>
#include <math.h>

using namespace std;


 /*Dada la hipotenusa y el ángulo de un triángulo rectángulo, sacar las medidas del triángulo.*/

int main() {
    float h; 
    cout << "Type hypotenuse: "; // Type a number and press enter
    cin >> h; // Get user input from the keyboard
    float a;
    cout << "Type angle: "; // Type a number and press enter
    cin >> a; // Get user input from the keyboard
    float alpha = (a * atan(1)*4) / 180;
    float m = sin(alpha) * h;
    float c = cos(alpha) * h;
    cout << "The measures of the triangle are: " << m << ", " << c << ", " << h;
}