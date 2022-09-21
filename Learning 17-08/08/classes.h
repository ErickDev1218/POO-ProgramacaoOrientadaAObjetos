#ifndef CLASSES_H
#define CLASSES_H
#include <bits/stdc++.h>
using namespace std;

class Caneta{
    
    private:
    string cor;
    string tamanho;
    int valor;
    string qualidade;

    public:
    //CONSTRUTOR
    Caneta(int x);
    
    
    //GETS
    string getcor();
    string gettamanho();
    int getvalor();
    string getqualidade();

    //SETS
    void setcor(string n);
    void settamanho(string n);
    void setvalor(int n);
    void setqualidade(string n);

    protected:
};

//TIPO->CLASSE->METODO;
string Caneta::getcor(){
    return cor;
};

string Caneta::gettamanho(){
    return tamanho;
};

int Caneta::getvalor(){
    return valor;
};

string Caneta::getqualidade(){
    return qualidade;
};

void Caneta::setcor(string n){
    cor = n;
};

void Caneta::settamanho(string n){
    tamanho = n;
};

void Caneta::setvalor(int n){
    valor = n;
};

void Caneta::setqualidade(string n){
    qualidade = n;
};

Caneta::Caneta(int x){
    if(x == 0){
        cor = "branca";
        tamanho = "grande";
        valor = 8;
        qualidade = "razoavel";
    }
};

#endif