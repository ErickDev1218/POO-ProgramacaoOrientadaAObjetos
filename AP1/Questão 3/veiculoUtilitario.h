#ifndef VEICULOUTILITARIO_H
#define VEICULOUTILITARIO_H
#include "veiculoCarga.h"
#include "veiculoPasseio.h"
#include <iostream>
using namespace std;

class veiculoUtilitario: public veiculoCarga, veiculoPasseio{
    public:
        veiculoUtilitario(string n, int pe, int po, int carga, int vi);
        int peso_potencia();
        void print();
};




#endif