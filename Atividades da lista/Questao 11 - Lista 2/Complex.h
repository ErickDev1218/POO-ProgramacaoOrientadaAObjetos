#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex{
    public:
        Complex() = default;
        Complex(double r, double i);

        void print();

        Complex operator+(Complex &x);
        Complex operator-(Complex &x);
        Complex operator*(Complex &x);
        Complex operator/(Complex &x);
    private:
        double real;
        double imag;
};

#endif