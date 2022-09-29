#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*1.   Comprobar si un número es par o impar, y señalar la posición de memoria donde se está
guardando el número. Con punteros.*/

bool isPair(int n) {
    if (n % 2 == 0) {
        return true; 
    }
    else {
        return false;
    }
}

int main() {
    int n;
    int *m;
    m = &n; // Pointing to memory
    
    cout << "\nIntroduce number:\n\n"; // Type a number and press enter
    cin >> n;

    if (isPair(n)) {
        cout << "The number " << *m << " is Pair.\n";
        cout << "Its memory position is:\t" << m << "\n";
    }
    else {
        cout << "The number " << *m << " is NOT Pair.\n";
    }
       
}