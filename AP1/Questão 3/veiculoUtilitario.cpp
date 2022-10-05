#include "veiculoUtilitario.h"
#include <iostream>
using namespace std;

veiculoUtilitario::veiculoUtilitario(string n, int pe, int po, int carga, int vi):veiculo(n,pe,po),veiculoCarga(n,pe,po,carga),veiculoPasseio(n,po,po,vi){

}

int veiculoUtilitario::peso_potencia(){
    veiculoCarga::print();

}

void veiculoUtilitario::print(){
    veiculoCarga::print();
    cout << "Volume Interno: " << getvolumeinterno() << endl;
}