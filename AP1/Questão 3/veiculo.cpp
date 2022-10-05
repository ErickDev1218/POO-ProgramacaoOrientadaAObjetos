#include "veiculo.h"
#include <iostream>
using namespace std;

veiculo::veiculo(string n, int pe, int po){
    setnome(n);
    setpeso(pe);
    setpotencia(po);
}

string veiculo::getnome(){
    return nome;
}
int veiculo::getpeso(){
    return peso;
}
int veiculo::getpotencia(){
    return potencia;
}

void veiculo::setnome(string n){
    nome = n;
}
void veiculo::setpeso(int pe){
    peso = pe;
}
void veiculo::setpotencia(int po){
    potencia = po;
}

void veiculo::print(){
    cout << "Nome: " <<getnome() << endl;
    cout << "Peso: " << getpeso()<< endl;
    cout << "Potencia: " << getpotencia()<< endl;
}
