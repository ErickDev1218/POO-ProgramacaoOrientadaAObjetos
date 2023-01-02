#include "Complex.h"
#include <iostream>
using namespace std;


Complex::Complex(double r, double i){
    real = r;
    imag = i;
}

Complex Complex::operator+(Complex &x){
    Complex aux;
    aux.real = this->real + x.real;
    aux.imag = this->imag + x.imag;
    return aux;
}
Complex Complex::operator-(Complex &x){
    Complex aux;
    aux.real = this->real - x.real;
    aux.imag = this->imag - x.imag;
    return aux;
}
Complex Complex::operator*(Complex &x){
    Complex aux;
    aux.real = this->real * x.real;
    aux.imag = this->imag * x.imag;
    return aux;
}
Complex Complex::operator/(Complex &x){
    Complex aux;
    aux.real = this->real / x.real;
    aux.imag = this->imag / x.imag;
    return aux;
}

void Complex::print(){
    cout << "Parte real = " << real << endl << "Parte imaginaria = " << imag << "i" << endl;
}