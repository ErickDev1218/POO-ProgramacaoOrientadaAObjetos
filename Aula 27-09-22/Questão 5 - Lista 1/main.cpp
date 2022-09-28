#include "Poupanca.h"
#include <iostream>
using namespace std;

int main(){
    poupanca test(5,300.50);
    
    cout << "Saldo inicial: " << test.getsaldoini() << endl;
    cout << "Apos o debito de 299,00, seu novo saldo eh: ";
    test.deb(299);
    cout << test.getsaldoini() << endl;
    cout << "Mas voce creditou 100,00, entao seu novo saldo eh: ";
    test.cred(100);
    cout << test.getsaldoini() << endl;
    test.calcRen(5,test.getsaldoini());
}