#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*2.   Construir una clase tiempo que contenga los siguientes atributos enteros: horas,
minutos y segundos. Hacer que la clase contenga 2 constructores, el primero debe tener
3 parámetros Tiempo(int, int, int) y el segundo solo tendrá un campo que serán los
segundos y desensamble el número entero largo en horas, minutos y segundos.*/

class Time {
    private:
        int h, m, s;
    public:
        Time(int, int, int);
        Time(int);
        void showTime();
};

Time::Time(int _hours, int _minutes, int _seconds) {
    h = _hours;
    m = _minutes;
    s = _seconds;
};

Time::Time(int _totalSeconds) {
    h = _totalSeconds / 3600;
    _totalSeconds %= 3600;
    m = _totalSeconds / 60;
    s = _totalSeconds %= 60;
};

void Time::showTime() {
    cout << "The exact time is:\t" << h << ":" << m << ":" << s << "\n";
}

int main() {
    Time t1(10, 10, 20);
    t1.showTime();

    Time t2(6969);
    t2.showTime();       
}