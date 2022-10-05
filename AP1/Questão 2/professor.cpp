#include "professor.h"
#include <iostream>
using namespace std;


professor::professor(string n, string m, int i){
    setnome(n);
    setmatricula(m);
    setidade(i);
}

//gets;

string professor::getnome(){
    return nome;
}
string professor::getmatricula(){
    return matricula;
}
int professor::getidade(){
    return idade;
}

//sets;

void professor::setnome(string n){
    nome = n;
}
void professor::setmatricula(string m){
    matricula = m;
}
void professor::setidade(int i){
    idade = i;
}

