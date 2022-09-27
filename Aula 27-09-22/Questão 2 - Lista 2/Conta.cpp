#include "Conta.h"
#include <iostream>
#include <string>
using namespace std;

Conta::Conta(float x){
    if(x < 0){
        setsaldoConta(0);
        cout << "ERROR! Seu valor eh menor que 0, portanto, seu saldo iniciou com 0" << endl;
    }else{
        setsaldoConta(x);
    }
}

//Gets;
float Conta::getsaldoConta(){
    return saldoConta;
}


float Conta::getSaldo(){
    return saldoConta;
}

//Sets;
void Conta::setsaldoConta(float x){
    saldoConta = x;
}

void Conta::setDebito(float x){
    if(saldoConta - x < 0){
        cout << "ERROR! Saldo insuficiente!" << endl;
    }else{
        saldoConta -= x;
    }
}

void Conta::setCredito(float x){
    saldoConta += x;
}
