#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


 /*Dados dos números y la operación que desee el usuario multiplique, divida, sume o reste ambos números.*/
double mult(double x, double y) {
    return x * y;
}


double sum(double x, double y) {
    return x + y;
}


double sub(double x, double y) {
    return x - y;
}


double split(double x, double y) {
    return x / y;
}


int getFirstValue(string operation, int position) {
    string str;
    for (int x = 0; x < position; x++) {
                str += operation[x];
    }
    return stoi(str);
}


int getSecondValue(string operation, int position) {
    string str;
    for (int x = position + 1; x < operation.size(); x++) {
        str += operation[x];
    }
    return stoi(str);
}


int main() {
    double a;
    double b;
    string op;

    std::cout << "Introduce operación:\t";
    std::getline(std::cin, op);
    // Remove all whitespace characters
    op.erase(std::remove_if(op.begin(), op.end(), ::isspace), op.end());

    for (int i = 0; i < op.size(); i++) {
        if (op[i] == '+') {
            a = getFirstValue(op, i);
            b = getSecondValue(op, i);
            cout << "\nEl resultado es:\t" << sum(a, b) << "\n";
        }
        else if (op[i] == '-') {
            a = getFirstValue(op, i);
            b = getSecondValue(op, i);
            cout << "\nEl resultado es:\t" << sub(a, b) << "\n";
        }
        else if (op[i] == '*' || op[i] == 'x') {
            a = getFirstValue(op, i);
            b = getSecondValue(op, i);
            cout << "\nEl resultado es:\t" << mult(a, b) << "\n";
        }
        else if (op[i] == '/') {
            a = getFirstValue(op, i);
            b = getSecondValue(op, i);
            cout << "\nEl resultado es:\t" << split(a, b) << "\n";
        }
    }
}