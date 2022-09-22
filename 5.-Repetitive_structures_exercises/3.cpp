#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

 /*3.   Realizar un programa que calcule la descomposición en factores primos de un número
entero. Ejemplo 18=2*3*3.*/


bool isMultiple(int n , int m) {
    if (n % m == 0) {
        return true; 
    }
    else {
        return false;
    }
}


int userInput() {
    cout << "Type number:\n";
    int n;
    cin >> n;
    return n;
}


void printPrimeFactors(int n) {
    while (isMultiple(n, 2)) {
        cout << "2\t";
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (isMultiple(n, i)) {
            cout << i << "\t";
            n = n / i;
        }
    }
    if (n > 2) {
        cout << n << "\t";
    }
}


int main() {
    int n = userInput();
    cout << "Prime factors of " << n << " are:\n";
    printPrimeFactors(n);
    return 0;
}