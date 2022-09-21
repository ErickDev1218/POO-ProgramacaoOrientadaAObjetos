#include <iostream>
#include "VeiculoAquatico.h"
using namespace std;

//Construtor;
VeiculoAquatico::VeiculoAquatico(string tipo, string tamanho):Veiculo(){
    this->tipo = tipo;
    this->tamanho = tamanho;
}

//Gets;

string VeiculoAquatico::gettipo(){
    return tipo;
}

string VeiculoAquatico::gettamanho(){
    return tamanho;
}

//Sets;

void VeiculoAquatico::settipo(string tipo){
    this->tipo = tipo;
}

void VeiculoAquatico::settamanho(string tamanho){
    this->tamanho = tamanho;
}