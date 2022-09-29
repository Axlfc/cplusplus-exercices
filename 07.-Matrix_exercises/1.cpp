#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*1.   Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y
columnas. Posteriormente, mostrar la matriz en pantalla.*/



int main() {
    int row;
    cout << "\nType number of rows:\n"; // Type a number and press enter
    cin >> row;

    int column;
    cout << "\nType number of columns:\n"; // Type a number and press enter
    cin >> column;

    int m[row][column] = {};

    cout << "\n" << row << "x" << column << " Matrix:\n";
    for (int i = 0; i < row; i++) {
        cout << endl;
        for (int j = 0; j < column; j++) {
            cout << m[i][j] << " ";
        }
    }
    cout << "\n";
}