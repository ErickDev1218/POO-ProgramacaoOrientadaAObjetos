#include <iostream>
#include <string>
#include "VeiculoAnfibio.h"
using namespace std;

int main(){
    VeiculoAnfibio *Batman = new VeiculoAnfibio("Carro comum","Fiat","30.000","120km/hr","Barco","Cruzeiro","Carro do Batman","Nadador e andador");

    Batman->print();
}