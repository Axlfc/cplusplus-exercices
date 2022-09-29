#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*3.   Hacer un programa que lea 5 números, los copie en otro vector multiplicado por 2 y se
muestre por pantalla.*/

int calculeMult(vector<int> vect) {
    int result = 0;
    for (int x : vect) {
        result *= x;
    }
    return result;
}

int main() {
    int s = 5;
    int a;
    vector<int> vect;

    for(int i = 0; i < s; i++) {
        cin>>a;
        vect.push_back(a);
    }
    cout << "\n";
    
    for(auto &p: vect) {
      cout << p * 2 << " ";
    }
   cout << "\n";
   return 0;
       
}