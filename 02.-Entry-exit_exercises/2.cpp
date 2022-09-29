#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*2.   Realizar un programa que lea los siguientes datos de una persona: edad (dato tipo
entero), sexo (tipo carácter) y altura en metros (tipo real). Tras leer los datos, el
programa debe mostrar todo en una misma oración.*/



int main() {
    int a;
    char s;
    string m;
    char magnitude;
    float realM;

    cout << "\nType age:\n\n"; // Type a number and press enter
    cin >> a;
    cout << "\nType sex (m/f):\n\n"; // Type a number and press enter
    cin >> s;
    cout << "\nType height:\n\n"; // Type a number and press enter
    cin >> m;
    // Only meters are interpeted, submagnitudes like cm are not contemplated. 
    for (int i = 0; i < m.size(); ++i) {
        if (m[i] == 'm') {
            magnitude = m[i];
        }

        if (m[i] == ',') {
            m[i] = '.';
        }

    }
    m.erase(remove(m.begin(), m.end(), magnitude), m.end());
    realM = atof(m.c_str());

    
    cout << "\nData:\tage=" << a << "\tsex=" << s << "\theight=" << realM << magnitude << "\n";
}