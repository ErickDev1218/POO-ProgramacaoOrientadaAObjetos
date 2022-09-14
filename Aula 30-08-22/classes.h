#ifndef CLASSES_H
#define CLASSES_H
#include <bits/stdc++.h>
using namespace std;

class Carro{
    public:
    Carro(int d);

    string marca;
    string cor;
    string modelo;

    void imprimir();

    private:
    protected:

};

Carro::Carro(int d){
    if(d == 1){
        marca = "Honda";
        cor = "Preto";
        modelo = "Civic";
    }
}

void Carro::imprimir(){
    cout << "Seu carro eh um " << marca << " " << modelo << " " << cor;
}

#endif