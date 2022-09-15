#include <iostream>
using namespace std;
#include <random>

 /*Escribir una función que genere contraseñas de 8 carácteres, que tenga 2 carácteres que se encuentren en el nombre de usuario.*/
string generatePassword(string u) {
    string password;
    int n = rand() % u.size();
    int n1 = rand() % u.size();

    password.insert(password.end(), u[n]);
    password.insert(password.end(), u[n1]);
    for (int i = 1; i <= 6; i++) {
        char x = 97 + rand() % 26;
        password.insert(password.end(), x);
    }
    return password;
}


int main() {
    string usuario;
    cout << "Introduce el nombre de usuario:\n";
    cin >> usuario;
    cout << "La contraseña generada es:\t" << generatePassword(usuario) << "\n";
}