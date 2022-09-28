#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*4.   Realizar un programa en el cual se construya una solución para la jerarquía (herencia)
de clases mostrada en la siguiente figura:*/
    //      -->Trabajador
// Persona --
    //      -->Estudiante-->Estudiante de 2º año


class Person {
    private:  // Attributes
        string name;
        int age;

    public:
        Person(string, int);  // Constructor
        void showPerson();

};


class Worker:   public Person {
    private:  // Attributes
        float salary;  
    public:
        Worker(string, int, float);  // Constructor
        void showWorker(); 
};


class Student:  public Person {
    private:  // Attributes
        float averageGrade;
    public:
        Student(string, int, float);
        void showStudent();
};


class Student2: public Student {
    private:
        string accessWork;
    public:
        Student2(string, int, float, string);
        void showStudent2();
};


Person::Person(string _name, int _age) {  // Parent constructor
    name = _name;
    age = _age;
};


void Person::showPerson() {
    cout << "The name of the person is:\t" << name << "\n";
    cout << "The age of the person is:\t" << age << "\n";
}


Worker::Worker(string _name, int _age, float _salary):  Person(_name, _age) {  // Child constructor
    salary = _salary;
};


void Worker::showWorker() {
    showPerson();
    cout << "The salary of the person is:\t" << salary << "\n";
}


Student::Student(string _name, int _age, float _averageGrade): Person(_name, _age) {  // Child constructor
    averageGrade = _averageGrade;
};


void Student::showStudent() {
    showPerson();
    cout << "The average grade of the person is:\t" << averageGrade << "\n";
}


Student2::Student2(string _name, int _age, float _averageGrade, string _accessWork): Student(_name, _age, _averageGrade) {  // Child constructor
    accessWork = _accessWork;
}

void Student2::showStudent2() {
    showStudent();
    cout << "The work access of the person is:\t" << accessWork << "\n";
}

int main() {
    
    Worker w1("John", 21, 2500);
    cout << "<-----------------Worker----------------->\n";
    w1.showWorker();
    cout << "\n";

    Student s1("Kevin", 21, 7);
    cout << "<-----------------Student----------------->\n";
    s1.showStudent();
    cout << "\n";

    Student2 s2("Christian", 43, 6.5, "Class Boss");
    cout << "<-----------------Student 2----------------->\n";
    s2.showStudent2();       
}