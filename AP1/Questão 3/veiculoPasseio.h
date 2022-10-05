#ifndef VEICULOPASSEIO_H
#define VEICULOPASSEIO_H
#include "veiculo.h"
#include <iostream>
using namespace std;

class veiculoPasseio: public virtual veiculo{
    public:
        veiculoPasseio(string n, int pe, int po,int vi);

        int getvolumeinterno();

        void setvolumeinterno(int vi);

        int peso_potencia(int pe, int po);
        void print();

    private:
        int volumeinterno;
};


#endif