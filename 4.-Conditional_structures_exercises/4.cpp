#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*4.   Hacer un programa que simule un cajero automático, con saldo inicial de 1000 €. El
usuario podrá introducir saldo, sacar dinero o consultar el saldo de la cuenta..*/

int intro(int n, int x) {
    return n + x;
}

int take(int n, int x) {
    return n - x;
}

int consult(int n) {
    return n;
}

int main() {
    bool isClientOperating = true;
    int balance = 1000;
    string op;
    int amount;
    cout << "a)\tIntroduce\n";
    cout << "b)\tTake\n";
    cout << "c)\tConsult\n";

    while (isClientOperating) {
        cout << "\nSelect operation:\n"; // Type a number and press enter
        cin >> op;
        if (op == "a") {
            cout << "\nHow much do you want to introduce?\n";
            cin >> amount;
            balance = intro(balance, amount);
            cout << amount << "€ introduced."<< "\n";
        }
        else if (op == "b") {
            cout << "\nHow much do you want to take?\n";
            cin >> amount;
            balance = take(balance, amount);
            cout << amount << "€ taken."<< "\n";
        }
        else if (op == "c") {
            cout << "\nBalance is: " << consult(balance) << "€\n";
        }
        else if (op == "exit") {
            cout << "\nExiting";
            isClientOperating = false;
            return 0;
        }
        else {
            cout << "Invalid operation. Exiting\n";
            return 1;
        }
    }
       
}