#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*2.   En una clase de 4 alumnos se han realizado 3 exámenes y se quiere determinar lo
siguiente:
a. Número de alumnos que aprobaron todos los exámenes.
b. Nº de alumnos que aprobaron al menos un examen.
c. Nº de alumnos que aprobaron el último examen.*/

int studentGradeInput() {
    cout << "Type grade:\n";
    int n;
    cin >> n;
    return n;
}


int main() {
    int numStudents = 4;
    int numExams = 3;
    int numStudentsAllPass = 0;  // a.
    int numStudentsOnePass = 0;  // b.
    int numStudentsLastPass = 0;  // c.
    int grade = 0;

    for (int i = 0; i < numStudents; i++) {
        cout << "\n\nStudent number " << i << ":\n";
        float grade0 = 0;
        float grade1 = 0;
        float grade2 = 0;
        for (int j = 0; j < numExams; j++) {
            cout << "Exam " << j << endl;
            if (j == 0) {
                grade0 = studentGradeInput();
            }
            else if (j == 1) {
                grade1 = studentGradeInput();
            }
            else if (j == 2) {
                grade2 = studentGradeInput();
            }
        }
        if (grade0 >= 5 && grade1 >= 5 && grade2 >= 5) {
            numStudentsAllPass++;
        }
        if (grade0 >= 5 || grade1 >= 5 || grade2 >= 5) {
            numStudentsOnePass++;
        } 
        if (grade2 >= 5) {
            numStudentsLastPass++;
        }
    }
    cout << "\nPassed all the exams:\t" << numStudentsAllPass << "\n";
    cout << "Passed at least one exam:\t" << numStudentsOnePass << "\n";
    cout << "Passed the last exam:\t" << numStudentsLastPass << "\n";
}