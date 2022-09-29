#include <iostream>
#include <algorithm>
#include <string>
#include <random>


using namespace std;

 /*2.   Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de
números aleatorios y mostrar dicha matriz traspuesta por pantalla.*/



int main() {
    srand(time(NULL));   // Initialization, should only be called once.
    int row;
    cout << "\nType number of rows:\n"; // Type a number and press enter
    cin >> row;

    int column;
    cout << "\nType number of columns:\n"; // Type a number and press enter
    cin >> column;

    int m[row][column], t[row][column] = {};

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            int r = rand() % 100 + 1;
            m[i][j] = r;
        }
    }
    cout << "\n\n";

    // Loop to print Matrix
    cout << row << "x" << column << " Matrix:\n";
    for (int i = 0; i < row; i++) {
        cout << endl;
        for (int j = 0; j < column; j++) {
            cout << m[i][j] << " ";
        }
    }
    cout << "\n";

    // Compute transposed matrix
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            t[j][i] = m[i][j];
        }
    }

    // Loop to print Transposed Matrix
    cout << "\n\nThe " << row << "x" << column << " transposed matrix is:\n\n";
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