#include <iostream>
#include <algorithm> 

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


int main() {
    // double a;
    // double b;
    string op;

    std::cout << "Introduce operación:\t";
    std::getline(std::cin, op);
    // Remove all whitespace characters
    op.erase(std::remove_if(op.begin(), op.end(), ::isspace), op.end());

    for (int i = 0; i < op.size(); i++) {
        if (op[i] == '+') {
            cout << op;
            cout << "\nEl resultado es:\t" << op << "\n";
            // :D --> Index position before '+' is the a double value, after '+' is the b double value.
        }
        else if (op[i] == '-') {
            // cout << op; 2-2
        }
        else if (op[i] == '*' || op[i] == 'x') {
            // cout << op; 2*2 o 2x2
        }
        else if (op[i] == '/') {
            // cout << op; 2/2
        }
    }
    

}