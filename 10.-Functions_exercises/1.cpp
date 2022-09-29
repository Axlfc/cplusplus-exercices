#include <iostream>
#include <algorithm>
#include <string>
#include <random>

using namespace std;

 /*1.   Realizar un programa que dados dos números, si la suma de ambos es mayor a 20 saque
el resultado de multiplicarlos, y en caso contrario, muestre un número aleatorio.
Realizar con funciones.*/

 /*Dados dos números y la operación que desee el usuario multiplique, divida, sume o reste ambos números.*/
double mult(double x, double y) {
    return x * y;
}


double sum(double x, double y) {
    return x + y;
}


double randomNumber() {
    return rand() % 100 + 1;
}

void exercise() {
    double x;
    double y;
    cout << "Type number:\n\n"; // Type a number and press enter
    cin >> x;
        cout << "\nType number:\n\n"; // Type a number and press enter
    cin >> y;

    if (sum(x, y) >= 20) {
        cout << "\n" << mult(x, y) << "\n";
    }
    else {
        cout << "\nRandom number:\t" << randomNumber() << "\n";
    }
}

int main() {
    srand(time(NULL));   // Initialization, should only be called once.
    
    exercise();
}