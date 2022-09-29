#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

 /*1.   Escribir un programa que defina un vector de números y calcule: la suma y la
multiplicación de sus elementos.*/

int calculeSum(vector<int> vect) {
    int result = 0;
    for (int x : vect) {
        result += x;
    }
    return result;
}


int calculeMult(vector<int> vect) {
    int result = 0;
    for (int x : vect) {
        result *= x;
    }
    return result;
}


int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    vector<int> vect(arr, arr + n);
  
    cout << "The elements of the vector summed are:\t" << calculeSum(vect) << "\n";
    cout << "The elements of the vector multiplied are:\t" << calculeMult(vect) << "\n";
    return 0;
}