#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*3.   Escribir un programa que identifique cuántas mayúsculas y minúsculas hay en un
conjunto de caracteres.*/



int main() {
    int c = 0;
    string text;
    int mayusNum = 0;
    cout << "\nType text:\n\n"; // Type a text and press enter
    getline(cin, text);
    remove(text.begin(), text.end(), ' ');
    int length = text.size();

    for (int i = 0; i < length; ++i) {
        if (isupper(text[i])) {
            c++;
        }
    }
    cout << "\nNumber of capital letters:\t" << c << "\n";
    cout << "\nNumber of lower case letters:\t" << length - c << "\n";
}