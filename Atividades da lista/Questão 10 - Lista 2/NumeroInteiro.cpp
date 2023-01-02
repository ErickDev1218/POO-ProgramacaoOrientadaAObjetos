#include "NumeroInteiro.h"
#include <iostream>
using namespace std;

NumeroInteiro::NumeroInteiro(int n, int d){
    if(d <= 0){
        cout << "ERROR! Valor do denominador nulo ou negativo!" << endl;
    }else{
        numerador = n;
        denominador = d;
    }
}

int NumeroInteiro::div(int n, int d){
    int x = n/d;
    return x;
}


NumeroInteiro NumeroInteiro::operator+(NumeroInteiro &v){
    NumeroInteiro aux;
    aux.numerador = (this->numerador*v.denominador) + (this->denominador * v.numerador);
    aux.denominador = this->denominador*v.denominador;
    return aux;
}

NumeroInteiro NumeroInteiro::operator-(NumeroInteiro &v){
    NumeroInteiro aux;
    aux.numerador = (this->numerador*v.denominador) - (this->denominador*v.numerador);
    aux.denominador = this->denominador*v.denominador;
    return aux;
}
NumeroInteiro NumeroInteiro::operator*(NumeroInteiro &v){
    NumeroInteiro aux;
    aux.numerador = this->numerador*v.numerador;
    aux.denominador = this->denominador*v.denominador;
    return aux;
}
NumeroInteiro NumeroInteiro::operator/(NumeroInteiro &v){
    NumeroInteiro aux;
    aux.numerador = this->numerador*v.denominador;
    aux.denominador = this->denominador*v.numerador;
    return aux;
}


void NumeroInteiro::print(){
    cout << div(numerador,denominador) << endl;
}