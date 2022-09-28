#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"
#include <iostream>
using namespace std;

class poupanca:public conta{
    public:
        poupanca(int r,float x);

        void setrendimento(int r);
        int getrendimento();

        void calcRen(int r, float x);

    private:
        int rendimento;
};
#endif