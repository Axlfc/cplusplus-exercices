#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

 /*2.   Hacer un programa que determine si una palabra es palíndroma (se lee igual desde la
izquierda que desde la derecha, por ejemplo: sugus).*/

bool isPalindrome(string w) {
    bool p = true;
    for (int i = 0; i < (w.size() / 2); i++) {
        if(w[i] != w[w.size() - i - 1]) {
            p = false;
        }
    }
    return p;
}

int main() {
    string x;
    cout << "\nType word:\n"; // Type a word and press enter
    getline(cin, x);

    if (isPalindrome(x)) {
        cout << "The word is a palindrome\n";
        return 0;
    }
    else {
        cout << "The word is not a palindrome\n";
        return 1;
    }
       
}