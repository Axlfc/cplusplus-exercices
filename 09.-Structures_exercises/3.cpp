#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

 /*3.   Definir una estructura que sirva para representar a una persona. La estructura debe
contener dos campos: el nombre de la persona y un valor tipo lógico (1 o 0) que indica
si la persona está en activo o no (trabajando). Realizar un programa que dado un vector
de personas rellene dos nuevos vectores: uno que conecta las personas que no están en
activo y otro las que sí.*/


void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}


struct Persona_works{
	char name[30];
	bool works;
}p[30],pw[30],pww[30];


int main() {
    int nPeople, j=0, k=0;

	cout << "Enter number of people: ";
	cin >> nPeople;

	for(int i = 0; i < nPeople; i++){
		// Emptying the buffer
		clean_stdin();

		cout << "Name: ";
		cin.getline(p[i].name,30,'\n');

		cout << "Works (1/0)?:";
		cin >> p[i].works;

		if(p[i].works == 1){
            strcpy(pw[j].name,p[i].name);
            j++;
		}
		else{
			strcpy(pww[k].name,p[i].name);
			k++;
		}
		cout << "\n";
	}

	cout << "\nPeople with works\n";
	for(int i = 0; i < nPeople; i++) {
		cout << pw[i].name << "\n";
	}

	cout << "\nPeople without works\n";
	for(int i = 0; i < nPeople; i++) {
		cout << pww[i].name << "\n";
	}
	return 0;
}