#include "Tempo.h"
#include <iostream>
using namespace std;

Tempo::Tempo(int h, int m, int s){
    while(s >=60){
        s-=60;
        m++;
    }
    while(m >= 60){
        m -= 60;
        h++;
    }
    if(h >= 24){
        h = 0;
    }
    sethora(h);
    setminuto(m);
    setsegundo(s);
}

int Tempo::gethora(){
    return hora;
}
int Tempo::getminuto(){
    return minuto;
}
int Tempo::getsegundo(){
    return segundo;
}

void Tempo::sethora(int h){
    hora = h;
}

void Tempo::setminuto(int m){
    minuto = m;
}

void Tempo::setsegundo(int s){
    segundo = s;
}

Tempo Tempo::operator-(Tempo &v){
    Tempo aux;
    aux.hora = this->hora - v.hora;
    aux.minuto = this->minuto - v.minuto;
    aux.segundo = this->segundo - v.segundo;

    return aux;
}

Tempo Tempo::operator+(Tempo &v){
    Tempo aux;
    aux.hora = this->hora + v.hora;
    aux.minuto = this->minuto + v.minuto;
    aux.segundo = this->segundo + v.segundo;

    return aux;

}

void Tempo::print(){
    cout << gethora() << ":" << getminuto() << ":" << getsegundo() << endl;
}