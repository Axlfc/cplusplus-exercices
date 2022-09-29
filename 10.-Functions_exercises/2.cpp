#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

 /*2.   Hacer una función que tome como parámetros un vector de enteros y su tamaño e
imprima un vector con los elementos impares del vector recibido.*/

bool isOdd(int n) {
    if (n % 2 == 0) {
        return false;
    }
    else {
        return true;
    }
}


int main()
{
    // UNFINISHED
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    vector<int> v(arr, arr + n);

    return 0;
}