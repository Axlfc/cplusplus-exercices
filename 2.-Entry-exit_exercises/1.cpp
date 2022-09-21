#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*1.   Escribir un programa que del precio de un producto muestre en la salida el precio del
producto al aplicarle el IVA.*/

float applyTax(float n, float t) {
    return n + (n * t);
}


int main() {
    string price;  // 1€, 2€, 3$...
    float absolutePrice;  // 1.5, 2.25...
    string tax;  // 0.25, 25%, 75%...
    float absoluteTax;  // 0.25, 0.5...
    char currency;
    bool isPercentage = false;


    // We can have an input with the $ sign (or €, etc...)
    cout << "\nType price:\n\n"; // Type a number and press enter
    cin >> price;
    for (int i = 0; i < price.size(); ++i) {
        if (!isdigit(price[i])) {
            currency = price[i];
        }
    }
    price.erase(remove(price.begin(), price.end(), currency), price.end());

    // Convert string to float
    absolutePrice = atof(price.c_str());

    // We can have an input as 25% or, 0.25...
    cout << "\nType tax value:\n\n"; // Type a number and press enter
    cin >> tax;
    for (int i = 0; i < tax.size(); ++i) {
        if (!isdigit(tax[i])) {
            if (tax[i] == '%') {
                isPercentage = true;
                cout << "A PERCENTAGE!!\n";
            }
        }
    }

    tax.erase(remove(tax.begin(), tax.end(), '%'), tax.end());

    // Convert string to float
    if (isPercentage) {
        absoluteTax = atof(tax.c_str()) / 100;
    }
    else {
        absoluteTax = atof(tax.c_str());
    }


    cout << "\nFinal price:\t" << applyTax(absolutePrice, absoluteTax) << currency << "\n";
}