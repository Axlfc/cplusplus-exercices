#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*2.   Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
Nombre, edad y media. Pedir datos al usuario para 3 alumnos y mostrar por pantalla los
datos del alumno con mejor media.*/


void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

struct Students{
    char name[20];
    int age;
    float average;
}s[3];

int main() {
    int major = 0, pos=0;

	for(int i = 0; i < 3; i++) {
		cout << "Name: ";
		cin.getline(s[i].name, 20, '\n');

		cout << "Age: ";
		cin >> s[i].age;

		cout << "Average: ";
		cin >> s[i].average;

		// Emptying the buffer
		clean_stdin();

		if(s[i].average > major) {
			major = s[i].average;
			pos = i;
		}
		cout << "\n";
	}

	//Print student data with best average:
	cout << "\nStudent with best Average: \n";
	cout << "Name: " << s[pos].name << "\n";
	cout << "Age: " << s[pos].age << "\n";
	cout << "Average: " << s[pos].average << "\n";

	return 0;
}