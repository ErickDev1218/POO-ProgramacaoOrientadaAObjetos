#include "veiculoPasseio.h"
#include <iostream>
using namespace std;

veiculoPasseio::veiculoPasseio(string n, int pe, int po,int vi):veiculo(n,pe,po){
    setvolumeinterno(vi);
}

int veiculoPasseio::getvolumeinterno(){
    return volumeinterno;
}

void veiculoPasseio::setvolumeinterno(int vi){
    volumeinterno = vi;
}

int veiculoPasseio::peso_potencia(int pe, int po){
    return pe/po;
}

void veiculoPasseio::print(){
    veiculo::print();
    cout << "Volume Interno: " << getvolumeinterno() << endl;
    cout << "Peso-Potencia: " << peso_potencia(veiculo::getpeso(), veiculo::getpotencia()) << endl;
}