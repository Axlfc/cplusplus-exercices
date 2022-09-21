#include <iostream>
#include <random>

#include <time.h>
 #include <stdlib.h>

using namespace std;


 /* Solicite al usuario pensar un número entre el 1 y el 100.
 El programa debe generar un número aleatorio :S en ese mismo rango, 
 en indicarle si el número que el programa ha pensado es mayor o menor
 que el del usuario hasta que el usuario lo adivine. 
 Al final mostrar el número de intentos que le ha llevado al usuario.*/
int main() {
    srand(time(NULL));   // Initialization, should only be called once.
    bool success = false;
    int x;
    cout << "Piensa un número entre el 1 y el 100:\n";
    int r = rand() % 100 + 1;
    // cout << r << endl;
    while (!success) {
        cin >> x;
        if (x == r) {
            success = true;
        }
        else if (x > r) {
            cout << "Your number is bigger than the computer's." << endl;
        }
        else {
            cout << "Your number is smaller than the computer's." << endl;
        }
    }
    cout << "You WIN!" << endl;
    return 0;
}