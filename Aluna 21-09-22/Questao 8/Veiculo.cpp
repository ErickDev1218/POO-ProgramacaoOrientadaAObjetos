#include <iostream>
#include "Veiculo.h"
using namespace std;

//Construtor;
Veiculo::Veiculo(){};

Veiculo::Veiculo(string n, string m){
    this->nome = n;
    this->marca = m;
}

//Sets;
void Veiculo::setnome(string n){
    nome = n;
} 

void Veiculo::setmarca(string m){
    marca = m;
}

//Gets;

string Veiculo::getnome(){
    return nome;
}

string Veiculo::getmarca(){
    return nome;
}