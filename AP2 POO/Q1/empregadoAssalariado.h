#ifndef EMPREGADOASSALARIADO_H
#define EMPREGADOASSALARIADO_H
#include "empregado.h"
#include <iostream>
#include <string>

class empregadoAssalariado: public empregado{ // herança
    private:
        float salario;
    
    public:
        empregadoAssalariado(string n, float s):empregado(n){//construtor
           salario = s;
        }

        float calculaSalario(){ //metodo virtual puro
            return salario;
        }

        void print(){ //função polimorfica
            empregado::print(); //pegando o nome;
            cout << calculaSalario() << endl; // pegando salario;
        }

        void setsalario(float s){//setter
            salario = s;
        }

        float getsalario(){//getter
            return salario;
        }
};




#endif
