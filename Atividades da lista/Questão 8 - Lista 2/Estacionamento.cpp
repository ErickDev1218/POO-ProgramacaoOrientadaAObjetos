#include <iostream>
#include "Estacionamento.h"
using namespace std;
// Estacionamento::Estacionamento(Tempo v){
//     int xis = v.gethora();
//     Tempo(xis);
// }

Estacionamento::Estacionamento(string p, string m,int h, int min, int s):Tempo(h,min,s){
    setplaca(p);
    setmodelo(m);
}

string Estacionamento::getplaca(){
    return placa;
}

string Estacionamento::getmodelo(){
    return modelo;
}

void Estacionamento::setplaca(string p){
    placa = p;
}

void Estacionamento::setmodelo(string m){
    modelo = m;
}

void Estacionamento::print(){
    cout << "Modelo: " << getmodelo() << endl 
    << "Placa: " << getplaca() << endl
    << "Hora de entrada: ";
    Tempo::print();
    cout << endl;

}

float Estacionamento::Calc(int x){
    return x*1.5;
}