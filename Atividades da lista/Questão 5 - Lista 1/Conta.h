#ifndef CONTA_H
#define CONTA_H
#include <iostream>
using namespace std;

class conta{
    private:
        float saldoini;

    public:
        conta(float x);

        void setsaldoini(float x);

        float getsaldoini();

        void deb(float x);
        void cred(float x);
};



#endif