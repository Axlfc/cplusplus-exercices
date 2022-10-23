#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

 /*1.   Hacer un programa similar al anterior (sustituir la palabra pila por cola).*/



int main() {
    queue<int> newqueue;
    bool isUserDone = false;
    string x = "0";
    int y = 0;
    while (!isUserDone) {
        cout << "\n(Type a number to add to queue:\n\n"; // Type a number and press enter
        cin >> x;
        try {
            y = stoi(x);
            newqueue.push(y);
        }
        catch (invalid_argument &e) {
            isUserDone = true;
        }
    };
    // Print stack result
    while (!newqueue.empty()) {
        cout << newqueue.front() << ' ';
        newqueue.pop();
    }
    cout << "\n";
    return 0;
       
}