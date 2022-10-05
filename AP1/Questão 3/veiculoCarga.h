#ifndef VEICULOCARGA_H
#define VEICULOCARGA_H
#include "veiculo.h"
#include <iostream>
using namespace std;

class veiculoCarga: public virtual veiculo{
    public:
        veiculoCarga(string n, int pe, int po, int carga);

        int getcarga();

        void setcarga(int carga);

        int peso_potencia(int pe, int carga, int po);

        void print();


    private:
        int carga;
};





#endif