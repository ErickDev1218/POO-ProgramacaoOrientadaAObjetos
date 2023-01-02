#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string.h>
using namespace std;
class empregado{
    private:
        string nome;
    
    public:
        empregado(string n){
            this->nome = n;
        }
        virtual float calculaSalario() = 0; //Metodo virtual puro.
        
        virtual void print(){ //função polimorfica
            cout << nome << endl;
        }

        

};





#endif