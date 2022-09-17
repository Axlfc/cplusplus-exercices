#include <iostream>
#include <random>

using namespace std;

 /*Lea una matriz de 3x3 y cree su matriz transpuesta
 (la columna se transforma en fila y la fila en columna)*/
int main() {
    int m[3][3], t[3][3];
    int row = 3;
    int column = 3;

    //Loop to Enter Elements
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Enter element a" << i + 1 << "_" << j + 1 << ": ";
            cin >> m[i][j];
        }
    }

    // Loop to print Matrix    
    cout << "\n3x3 Matrix:\n";
    for (int i = 0; i < row; i++) {
        cout << endl;
        for (int j = 0; j < column; j++) {
            cout << m[i][j] << " ";
        }
    }

    // Compute transposed matrix
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            t[j][i] = m[i][j];
        }
    }

    // Loop to print Transposed Matrix
    cout << "\n\nThe 3x3 transposed matrix is:\n\n";
    for (int i = 0; i < column; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << t[i][j] << " ";
            if (j == row - 1) {
                cout << "\n";
            }
        }
    }
    return 0;
}