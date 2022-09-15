#include <iostream>
using namespace std;

 /*Realizar un programa que solicite un número y muestre su respectiva tabla de multiplicar*/
int main() {
    for (int i = 0; i <= 10; i++) {
        cout << i << "\t";
        for (int j = 1; j <= 10; j++) {
            if (i > 0) {
                cout << i * j << "\t";
            }
            else {
                cout << j << "\t";
            }
            cout << "\n";
        }
    }
}