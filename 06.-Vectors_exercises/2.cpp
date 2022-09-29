#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

 /*2.   Escribir un programa que defina un vector de números y muestre en la pantalla el vector
en orden inverso.*/

template<class InIt>
void print_range(InIt first, InIt last, char const* delim = "\n"){
  --last;
  for(; first != last; ++first){
    std::cout << *first << delim;
  }
  std::cout << *first;
}

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    vector<int> vect(arr, arr + n);

    print_range(vect.begin(), vect.end(), " -> ");
    cout << "\n=============\n";
    print_range(vect.rbegin(), vect.rend(), " <- ");
    cout << "\n";
       
}