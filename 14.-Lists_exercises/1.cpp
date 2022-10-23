#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <iterator>

using namespace std;

 /*1.   Crear una lista que almacene n números enteros y calcular el menor y el mayor de ellos.*/


int main() {
    list<int> mylist;
    int x;
    cout << "Please enter some integers (enter 0 to end):\n";
    do {
        cin >> x;
        mylist.push_back(x);
    } while (x);

    int m = 0;
    for(list<int>::iterator iter = mylist.begin(); iter != mylist.end(); iter++) {
        if (*iter > m) {
            m = *iter;
        }
    }
    cout << "The max value is: " << m << "\n";
    return 0;
}