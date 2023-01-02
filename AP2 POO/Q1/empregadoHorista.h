#ifndef EMPREGADOHORISTA_H
#define EMPREGADOHORISTA_H
#include "empregado.h"
#include <string>
#include <iostream>

class empregadoHorista:public empregado{
    private:
        int horas;
        float valorHoras;

    public:
    //getters e setters;
    void sethoras(int h){
        horas = h;
    }

    int gethoras(){
        return horas;
    }

    void setvalorHoras(float vh){
        valorHoras = vh;
    }

    float getvalorHoras(){
        return valorHoras;
    }

    //construtor
    empregadoHorista(string n, int h, float vh):empregado(n){
        this->sethoras(h);
        this->setvalorHoras(vh);
    }
    empregadoHorista();

    //metodo virtual puro
    float calculaSalario(){
        if(gethoras() <= 40){
            return gethoras()*getvalorHoras();
        }else{
           return (40/getvalorHoras()) + (gethoras()-40) *getvalorHoras()*1.5;
        }
    }

    void print(){
        empregado::print(); //pegando o nome;
        cout << gethoras() << endl; //pegando as horas;
        cout << getvalorHoras() << endl; //pegando valorHora;
        cout << calculaSalario() << endl; //Apesar de nao pedido na questão, está ai o calculo do salario.
    }

};



#endif