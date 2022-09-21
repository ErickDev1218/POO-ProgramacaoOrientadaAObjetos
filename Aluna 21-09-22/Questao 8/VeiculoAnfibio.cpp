#include <iostream>
#include <string>
#include "VeiculoAnfibio.h"
using namespace std;

//Construtor
VeiculoAnfibio::VeiculoAnfibio(string nome, string marca,/*Terrestre ->*/ string valor, string velocidade,/*Aquatico->*/ string tipo, string tamanho,/*VeiculoAnf->*/ string novonome, string novotipo):VeiculoTerrestre(valor,velocidade), VeiculoAquatico(tipo,tamanho),Veiculo(nome,marca){
    this->novonome = novonome;
    this->novotipo = novotipo;
}

//Gets;

string VeiculoAnfibio::getnovonome(){
    return novonome;
}

string VeiculoAnfibio::getnovotipo(){
    return novotipo;
}

//Sets;

void VeiculoAnfibio::setnovonome(string novonome){
    this->novonome = novonome;
}

void VeiculoAnfibio::setnovotipo(string novotipo){
    this->novotipo = novotipo;
}

//Print;
void VeiculoAnfibio::print(){
    cout << "Atributos de Veiculo: " << Veiculo::getnome() << " " << Veiculo::getmarca() << endl;
    cout << "Atributos de Veiculo Terrestre: " << VeiculoTerrestre::getvalor() << " " << VeiculoTerrestre::getvelocidade() << endl;
    cout << "Atributos de Veiculo Aquatico: " << VeiculoAquatico::gettipo() << " " << VeiculoAquatico::gettamanho() << endl;
    cout << "Atributos de Veiculo Anfibio: " << VeiculoAnfibio::getnovonome() << " " << VeiculoAnfibio::getnovotipo() << endl;
}