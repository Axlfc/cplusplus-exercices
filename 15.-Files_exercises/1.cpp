#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;

 /*1.   Realizar un programa que pida al usuario el nombre de un fichero de texto, y a
continuación permita almacenar al usuario tantas frases como éste desee.*/



int main() {
    // Create and open a text file
    bool isUserStopAddingPhrases = false;

    string fileName;
    string phrase;
    cout << "\nType file name:\n\n"; // Type a file name and press enter
    getline(cin, fileName);

    // Create and open a text file
    ofstream MyFile(fileName);

    // Write to the file
    cout << "\nType phrases: (Enter 0 to stop)\n\n";
    while (!isUserStopAddingPhrases) {
        getline(cin, phrase);
        if (phrase == "0") {
          break;
        }
        MyFile << phrase << "\n";
    }

    // Close the file
    MyFile.close();
       
}