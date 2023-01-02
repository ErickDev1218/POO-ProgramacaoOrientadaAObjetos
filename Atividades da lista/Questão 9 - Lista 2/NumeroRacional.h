#ifndef NUMERORACIONAL_H
#define NUMERORACIONAL_H
#include <iostream>
using namespace std;

class NumeroRacional{
    public:
        NumeroRacional() = default;
        NumeroRacional(float n, float d);
        float div(float n, float d);


        NumeroRacional operator+(NumeroRacional &v);
        NumeroRacional operator-(NumeroRacional &v);
        NumeroRacional operator*(NumeroRacional &v);
        NumeroRacional operator/(NumeroRacional &v);

        void print();

    private:
        float numerador;
        float denominador;

};
#endif


