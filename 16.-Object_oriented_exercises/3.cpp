#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*3.   Crear un programa que tenga la siguiente jerarquía de clases: animal(clase padre) →
Humano (Clase hija) → Perro (clase Hija), y hacer polimorfismo con el método comer().*/

class Animal {
    private:
        int age;
    public:
        Animal(int);  // Constructor
        virtual void eat();  // Polymorphism 
};


class Human:    public Animal {
    private:
        string name;
    public:
        Human(int, string);
        void eat();  // Inherited polyphormism
};


class Dog:  public Animal {
    private:
        string name, race;
    public:
        Dog(int, string, string);
        void eat();  // Inherited polyphormism
};


Animal::Animal(int _age) {  // Constructor
    age = _age;
}

void Animal::eat() {
    cout << "I eat...";
}


Human::Human(int _age, string _name): Animal(_age) {
    name = _name;
}

void Human::eat() {
    Animal::eat();
    cout << "at the table.\n";
}


Dog::Dog(int _age, string _name, string _race): Animal(_age) {
    name = _name;
    race = _race;
}

void Dog::eat() {
    Animal::eat();
    cout << "at the floor.\n";
}


int main() {
    Animal *animals[100];

    animals[0] = new Human(26, "Axel");

    animals[1] = new Dog(4, "Snoop", "Doggity Dog");

    animals[0] -> eat();

    animals[1] -> eat();

       
}