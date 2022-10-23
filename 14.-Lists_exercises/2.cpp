#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <iterator>

using namespace std;

 /*2.   Crear una lista que almacene n números reales y calcular su suma y media.*/


int main() {
    list<int> mylist;
    int n;
    int x;
    cout << "Please enter how many numbers:\t";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Enter number: ";
		cin >> x;
        mylist.push_back(x);
	}

    int s = 0;
    for(list<int>::iterator iter = mylist.begin(); iter != mylist.end(); iter++) {
      s += *iter;
    }

    int a = s / n;

    cout << "\n\nThe sum is: " << s << "\n";
    cout << "The average is: " << a << "\n";
}