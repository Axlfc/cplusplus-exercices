#include <iostream>
#include <algorithm>
#include <string.h>
#include <fstream>
#include "stdio.h"

using namespace std;

#define BUFFER 512

 /*2.   Hacer un programa para guardar números de teléfono que muestre un menú con las
siguientes opciones:
a. Crear (nombre, apellido, teléfono)
b. Agregar más contactos (nombre, apellido, teléfono)
c. Visualizar contactos existentes*/


void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}


enum Options {
    a,
    b,
    c,
    Option_Invalid,
    //others...
};


Options resolveOption(std::string input) {
    if( input == "a" ) {
      return a;
    }
    if( input == "b" ) {
      return b;
    }
    if( input == "c" ) {
      return c;
    }
    return Option_Invalid;
}


struct Person {
    char name[25];
    char surname[25];
    char phone[25];
    char email[25];
} contact;


void create();
void show();


int main() {
    string input;
	int exit = false;
    do {
 		cout << "\na. Create Contacts\n";
 		cout << "\nb. Show Contacts\n";
 		cout << "\nc. Exit\n";
 		cin >> input;

 		// Emptying the buffer
 		clean_stdin();

 		switch(resolveOption(input)) {
            case a:
                create();
                break;
            case b:
                show();
                break;
            case c:
                exit = true;
                break;
            default:
                cout << "\n\n\nPress only one of the indicated keys";
                break;
   	    }
   } while(!exit);
}


void create()
{
	int dec;
   	ofstream agenda;
      agenda.open("agenda.txt",ios::out|ios::app);
        if (agenda.fail()) {
            cout<<"ERROR occurred opening the file";
      	}
      	else {
            do {
                // Emptying the buffer
                clean_stdin();

                cout << "\n\nEnter Name: ";
                cin.getline(contact.name, BUFFER, '\n');
                cout << "\n\nEnter Surname: ";
                cin.getline(contact.surname, BUFFER, '\n');
                cout << "\n\nEnter Phone: ";
                cin.getline(contact.phone, BUFFER, '\n');
                cout << "\n\nEnter Email: ";
                cin.getline(contact.email, BUFFER, '\n');

                agenda << contact.name << "  " << contact.surname << "  " << contact.phone << "  " << contact.email << "\n\n";
                cout << "\n\nDo you want to add another contact? ";
                cout << "\n\n 1=yes, 2=no \n" << "\n";
                cin >> dec;
            } while (dec == 1);
        }
    agenda.close();
}


void show()
{
    cout<<"\n";
	ifstream agenda;
	agenda.open("agenda.txt");
	while(!agenda.eof())
	cout<<(char)agenda.get();
    agenda.close();
}