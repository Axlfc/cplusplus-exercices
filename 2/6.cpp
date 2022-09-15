#include <iostream>
#include <random>

using namespace std;

 /*Lea una matriz de 3x3 y cree su matriz transpuesta
 (la columna se transforma en fila y la fila en columna)*/
int main() {
    int m[3][3];
    cout << "Enter Elements of Array : ";
    //Loop to Enter Elements    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> m[i][j];
        }
    }

    // Loop to print Matrix    
    cout<<"3x3 Matrix :"<<endl;
    for (int i = 0; i < 3; i++) {
        cout << endl;
        for (int j = 0; j < 3; j++) {
            cout << m[i][j] << " ";
        }
    }
    // Loop to print Transposed Matrix
    
}