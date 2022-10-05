#include "veiculoCarga.h"
#include <iostream>
using namespace std;

veiculoCarga::veiculoCarga(string n, int pe, int po, int carga):veiculo(n,pe,po){
    setcarga(carga);
}

int veiculoCarga::getcarga(){
    return carga;
}

void veiculoCarga::setcarga(int carga){
    this->carga = carga;
}

int veiculoCarga::peso_potencia(int pe, int carga, int po){
    return (pe+carga)/po;
}

void veiculoCarga::print(){
    veiculo::print();
    cout << "Peso-Potencia: " << peso_potencia(veiculo::getpeso(),getcarga(),veiculo::getpotencia()) << endl;
}