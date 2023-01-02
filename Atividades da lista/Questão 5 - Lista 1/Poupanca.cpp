#include "Poupanca.h"
#include <iostream>
using namespace std;

poupanca::poupanca(int r, float x):conta(x){
    setrendimento(r);
}

void poupanca::setrendimento(int r){
    rendimento = r;
}
int poupanca::getrendimento(){
    return rendimento;
}

void poupanca::calcRen(int r, float x){
    cout << "O rendimento eh: " << fixed << conta::getsaldoini()*r;
}