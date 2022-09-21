#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*1.   Realizar un programa que lea un valor entero y determine si se trata de un número par
o impar*/


float notaFinal(float total, float n){
    return total / n;
}

int main() {
    bool final = false;
    float total = 0;
    string x;
    float y = 0;
    int c = -1;
    while ( !final ) {
        cout << "\n(Type 'FIN' to display result)\nType qualifiaction:\n\n"; // Type a number and press enter
        cin >> x;
        if ( x == "FIN" ) {
            final = true;
        }

        // Convert string to float
        y = atof(x.c_str());
        if (y <= 10) {
            total += y;
            c++;
        }
        else {
            cout << "Enter qualifiaction value lower than 10!\n";
            return 1;
        }
    }
    cout << "\nNota final:\t" << notaFinal(total, c) << "\n";
}