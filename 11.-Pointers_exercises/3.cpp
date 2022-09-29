#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

 /*3.   Definir una estructura que indique el tiempo empleado por un ciclista en recorrer una
etapa. La estructura debe tener tres campos: horas, minutos y segundos. Escribir un
programa que dado 3 etapas calcule el tiempo total que ha tardado en recorrer todas
las etapas. Usar punteros.*/

/*
Etapa 1     Etapa 2     Etapa 3
2h          1h          4h
3m          2m          5m
4s          3s          6s

El ciclista en la etapa 1 ha tardado: 2 horas, 3 minutos y 4 segundos.
El ciclista en la etapa 2 ha tardado: 1 horas, 2 minutos y 3 segundos.
El ciclista en la etapa 3 ha tardado: 4 horas, 5 minutos y 6 segundos.

El ciclista ha recorrido 7 horas, 10 minutos y 13 segundos en total.
*/
 
struct Stage {
    int hours;
    int minutes;
    int seconds;
};
 
int main()
{
    Stage stages[3];
 
    Stage *e = stages;
    int sumH, sumM, sumS;
 
    sumH = sumM = sumS = 0;
 
    for (int i = 0; i < 3; i++) {
        cout << "Stage " << i + 1 << ": " << "\n";
        cout << "hours: "; cin >> e -> hours;
        cout << "minutes: "; cin >> e -> minutes;
        cout << "seconds: "; cin >> e -> seconds;
        cout << "\n";
 
        sumH += e -> hours;
        sumM += e -> minutes;
        sumS += e -> seconds;
        e++;
    }
 
    int temp;
    if (sumS > 59) {
        temp = sumS / 60;
        sumM += temp;
        sumS -= temp * 60;
    }
    if (sumM > 59) {
        temp = sumM / 60;
        sumH += temp;
        sumM -= temp * 60;
    }
 
    cout << "Total Stages: " << (sumH < 10 ? "0" : "") << sumH << ":"
                             << (sumM < 10 ? "0" : "") << sumM << ":"
                             << (sumS < 10 ? "0" : "") << sumS << "\n";
 
    return 0;
}