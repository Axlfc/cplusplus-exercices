#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*1.   Construir una clase llamada Rectangle que tenga los siguientes atributos: largo y ancho,
y los siguientes métodos: perímetro() y área().*/

class Rectangle {
    private:
        float length, height;  // Attributes

    public:
        Rectangle (float, float);  // Constructor
        
        float perimeter();  // methods
        float area();
};

Rectangle::Rectangle(float _length, float _height) {
    length = _length;
    height = _height;
};

float Rectangle::perimeter() {
    return length + length + height + height;
}

float Rectangle::area() {
    return length * height;
}

int main() {
    Rectangle r(10, 10);
    cout << "\nArea:\t" << r.area() << "\n";
    cout << "\nPerimeter:\t" << r.perimeter() << "\n";
}