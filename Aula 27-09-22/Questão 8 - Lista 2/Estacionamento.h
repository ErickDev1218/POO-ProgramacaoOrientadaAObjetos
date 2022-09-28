#ifndef ESTACIONAMENTO_H
#define ESTACIONAMENTO_H
#include <iostream>
#include "Tempo.h"
using namespace std;

class Estacionamento: public Tempo{
    public:
        Estacionamento() = default;
        Estacionamento(Tempo v);
        Estacionamento(string p, string m,int h, int min, int s);

        string getplaca();
        string getmodelo();

        void setplaca(string p);
        void setmodelo(string m);

        void print();

        float Calc(int x);


    private:
        string placa;
        string modelo;
};



#endif