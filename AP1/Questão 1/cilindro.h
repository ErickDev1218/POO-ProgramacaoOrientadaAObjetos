#ifndef CILINDRO_H
#define CILINDRO_H
#include "circulo.h"
#include "retangulo.h"
#include <iostream>
using namespace std;

class cilindro: public retangulo, circulo{
    public:

        cilindro(float x, float y, float r);
        float calculaAreaCil();
        float calculaVolumeCil();
        void print();

};



#endif