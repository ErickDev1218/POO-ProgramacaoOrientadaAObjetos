#include "Conta.h"
#include <iostream>
using namespace std;

conta::conta(float x){
    setsaldoini(x);
}

void conta::setsaldoini(float x){saldoini = x;}

float conta::getsaldoini(){return saldoini;}

void conta::deb(float x){if(getsaldoini() - x < 0){cout << "ERROR! Saldo insuficiente";}else{saldoini -= x;}}

void conta::cred(float x){saldoini+=x;}