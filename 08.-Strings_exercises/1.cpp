#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*1.   Hacer un programa que pida al usuario que digite una cadena de caracteres, y si ésta
supera los 10 caracteres mostrarla en pantalla, en caso contrario mostrar error.*/



int main() {
    string x;
    cout << "\nType string:\n"; // Type a string and press enter
    getline(cin, x);
    if (x.size() >= 10) {
        cout << x << "\n";
        return 0;
    }
    else {
        cout << "ERROR\n";
        return 1;
    }
       
}