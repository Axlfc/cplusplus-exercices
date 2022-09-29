#include <iostream>
#include <algorithm>
#include <string>
#include <random>


using namespace std;

#define N 3

 /*3.   Realizar un programa que calcule la suma, resta y multiplicación de dos matrices
cuadradas de 3x3.*/


void sum(int mat1[][N],
              int mat2[][N],
              int res[][N])
{
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void sub(int mat1[][N],
              int mat2[][N],
              int res[][N])
{
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiply(int mat1[][N],
              int mat2[][N],
              int res[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}


int main() {
    srand(time(NULL));   // Initialization, should only be called once.
    
    int i, j;
    int row = N;
    int column = N;
    int ma[N][N], mb[N][N];
    int res[N][N]; // To store result
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            int r = rand() % 100 + 1;
            ma[i][j] = r;
            int r2 = rand() % 100 + 1;
            mb[i][j] = r2;
        }
    }

    // Loop to print Matrix A
    cout << row << "x" << column << " Matrix A:\n";
    for (int i = 0; i < row; i++) {
        cout << endl;
        for (int j = 0; j < column; j++) {
            cout << ma[i][j] << " ";
        }
    }
    cout << "\n\n\n";

    // Loop to print Matrix B
    cout << row << "x" << column << " Matrix B:\n";
    for (int i = 0; i < row; i++) {
        cout << endl;
        for (int j = 0; j < column; j++) {
            cout << mb[i][j] << " ";
        }
    }
    cout << "\n";

    sum(ma, mb, res);

    cout << "\n\nResult A+B matrix is:\n";
    for (i = 0; i < N; i++) {
        cout << "\n";
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << " ";
    }

    sub(ma, mb, res);

    cout << "\n\nResult A-B matrix is:\n";
    for (i = 0; i < N; i++) {
        cout << "\n";
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << " ";
    }


    multiply(ma, mb, res);

    cout << "\n\nResult A*B matrix is:\n";
    for (i = 0; i < N; i++) {
        cout << "\n";
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << " ";
    }

    return 0;
}
