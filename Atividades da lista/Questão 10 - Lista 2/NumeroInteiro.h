#ifndef NUMEROINTEIRO_H
#define NUMEROINTEIRO_H
#include <iostream>
using namespace std;

class NumeroInteiro{
    public:
        NumeroInteiro() = default;
        NumeroInteiro(int n, int d);
        int div(int n, int d);


        NumeroInteiro operator+(NumeroInteiro &v);
        NumeroInteiro operator-(NumeroInteiro &v);
        NumeroInteiro operator*(NumeroInteiro &v);
        NumeroInteiro operator/(NumeroInteiro &v);

        void print();

    private:
        int numerador;
        int denominador;

};
#endif


