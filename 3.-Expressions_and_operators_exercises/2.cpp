#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*2.   Escribir un programa que lea las notas de un alumno y calcule la nota final media de
dicho alumno. El alumno irá metiendo por pantalla las notas hasta escribir FIN.*/


float notaFinal(float total, float n){
    return total / n;
}

int main() {
    bool final = false;
    float total;
    string x;
    int c = 0;
    while ( !final ) {
        cout << "\nType qualifiaction:\n(Type 'FIN' to enter)\n\n"; // Type a number and press enter
        cin >> x;
        if ( x == "FIN" ) {
            final = true;
        }
        else {
            c++;
        }
        total += stoi(x);
    }
    cout << "Número de notas introducidas:\t" << c;
    cout << "\nNota final:\t" << notaFinal(total, c);
}