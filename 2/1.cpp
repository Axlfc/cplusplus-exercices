#include <iostream>
using namespace std;

 /*Escribir una función llamada strlen que devuelva el número de "a"s que lleva la cadena que introduce el usuario.*/

int strlen(string s) {
    int a = 0;

    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == 'a') {
            a++;
        }
    }
    return a;
}

int main() {
    string cadena;
    cout << "Introduce la cadena:\t";
    cin >> cadena;
    cout << "El número de a's de la cadena:\t" << strlen(cadena);
}