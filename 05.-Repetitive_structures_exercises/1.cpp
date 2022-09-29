#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*1.   Escribir un programa que calcule el valor de la suma de todos los números desde el 1
hasta el introducido por el usuario (1+2+3+...+n).*/

int userInput() {
    cout << "\nType number:\n\n";
    int n;
    cin >> n;
    return n;
}

int main() {
    int x = userInput();
    int c = 1;
    int total = 0;
    while (c <= x) {
        total += c;
        c++;
    }
    cout << "\nTOTAL:\n" << total << "\n";
}