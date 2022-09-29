#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

 /*2.   Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuales son
números pares y su posición en memoria.*/

bool isPair(int n) {
    if (n % 2 == 0) {
        return true; 
    }
    else {
        return false;
    }
}

int main() {
    
    int vector[10];
    int *m;

    for (int i = 0; i < 10; i++) {
        cout << "Insert number:\t";
        cin >> vector[i];
    }
    m = vector;

    for (int i = 0; i < 10; i++) {
        if (isPair(*m)) {
            cout << "\nThe number " << *m << " is Pair.\n";
            cout << "Its memory position is:\t" << m << "\n";
        }
        m++;
    }
       
}