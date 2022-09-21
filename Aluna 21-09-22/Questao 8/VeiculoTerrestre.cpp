#include <iostream>
#include <string>
#include "VeiculoTerrestre.h"
using namespace std;

//Construtor;
VeiculoTerrestre::VeiculoTerrestre(string valor, string velocidade):Veiculo(){
    this->valor = valor;
    this->velocidade = velocidade;
}

//Sets;
void VeiculoTerrestre::setvalor(string valor){
    this->valor = valor;
} 

void VeiculoTerrestre::setvelocidade(string velocidade){
    this->velocidade = velocidade;
}


//Gets;

string VeiculoTerrestre::getvalor(){
    return valor;
}

string VeiculoTerrestre::getvelocidade(){
    return velocidade;
}

//Print;
