#include "Conta.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Ola, digite seu primeiro saldo: ";
    int x = 0;
    cin >> x;
    Conta *erick = new Conta(x);

    cout << endl << "Agora, digite um valor de credito: ";
    cin.ignore();
    int c = 0;
    cin >> c;
    erick->setCredito(c);

    cout << endl << "Este eh seu saldo atual: " << erick->getSaldo();

    cout << endl << "Agora digite um valor para debito: ";
    cin.ignore();
    int d = 0;
    cin >> d;
    erick->setDebito(d);

    cout << endl << "Este eh seu saldo atual: " << erick->getSaldo();

    cout << endl << "================================" << endl << "Usuario 2:" << endl;

    //Usuario 2;

    cout << "Ola, digite seu primeiro saldo: ";
    int xi = 0;
    cin >> xi;
    Conta *thiago = new Conta(xi);

    cout << endl << "Agora, digite um valor de credito: ";
    cin.ignore();
    int ci = 0;
    cin >> ci;
    thiago->setCredito(ci);

    cout << endl << "Este eh seu saldo atual: " << thiago->getSaldo();

    cout << endl << "Agora digite um valor para debito: ";
    cin.ignore();
    int di = 0;
    cin >> di;
    thiago->setDebito(di);

    cout << endl << "Este eh seu saldo atual: " << thiago->getSaldo();

    cout << endl << "================================";





}