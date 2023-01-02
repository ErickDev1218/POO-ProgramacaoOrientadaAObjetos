#ifndef CONTA-H
#define CONTA-H
#include <iostream>
#include <string>
using namespace std;

class Conta{
    public:
        Conta(float x);
        //Gets;
        float getsaldoConta();
        float getSaldo();

        //Sets;
        void setsaldoConta(float x);
        void setDebito(float x);
        void setCredito(float x);

    private:
        float saldoConta;

};
#endif