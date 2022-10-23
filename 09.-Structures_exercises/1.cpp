#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>

using namespace std;

 /*1.   Hacer una estructura llamada competidores, en la cual se tendrán los siguientes
campos: Nombre, edad, sexo y club. Pedir datos al usuario para un corredor y asignarle
una categoría de competición:
a. Juvenil: 18 años
b. Senior: 40 años
c. Veterano: 40 años.
Imprimir todos los datos de los competidores, incluida su categoría de competición.*/

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

struct Competidores{
    char name[20];
    int age;
    char sex[10];
    char club[20];
}c1;

int main() {
    char category[20];

    cout << "\nType name:\n\n";
    cin.getline(c1.name, 20, '\n');

    cout << "\nType age:\n\n";
    cin >> c1.age;

    // Emptying the buffer
    clean_stdin();

    cout << "\nType sex:\n\n";
    cin.getline(c1.sex, 10, '\n');

    cout << "\nType club:\n\n";
    cin.getline(c1.club, 20, '\n');

    if (c1.age <= 18) {
        strcpy(category, "Youth");
    }
    else if (c1.age <= 40) {
        strcpy(category, "Senior");
    }
    else {
        strcpy(category, "Veteran");
    }

    cout << "\n\nCompetitor data\n";
    cout << "Name:\t" << c1.name << "\n";
    cout << "Age:\t" << c1.age << "\n";
    cout << "Sex:\t" << c1.sex << "\n";
    cout << "Club:\t" << c1.club << "\n";
    cout << "Category:\t" << category << "\n";
    return 0;
}