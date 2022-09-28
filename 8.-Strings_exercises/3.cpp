#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>


using namespace std;

 /*3.   Pedir al usuario su nombre en mayúscula. Si su nombre empieza por E, convertir su
nombre en minúscula, en caso contrario, mostrar por pantalla “Hola (nombre de
usuario)”.*/



int main() {
    string n;
    bool allCaps = false;
    cout << "\nType name with capital letter:\n"; // Type a name and press enter
    getline(cin, n);

    if (n[0] == 'E') {
        for (int i = 0; i < n.size(); ++i) {
            n[i] = tolower(n[i]);
        }
        cout << n << "\n";
    }
    else {
            cout << "Hola " << n << "\n";
        }       
}