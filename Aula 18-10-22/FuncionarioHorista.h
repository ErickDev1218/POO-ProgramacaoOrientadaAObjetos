#ifndef FH_H
#define FH_H
#include <iostream>
#include "Funcionario.h"
using namespace std;

class FuncionarioHorista: public Funcionario{
    private:
    float horas;
    float valorHoras;

    public:

    FuncionarioHorista(string n, string sn, string d, float h,float vh):Funcionario(n,sn,d){
        SetHoras(h);
        SetValorHoras(vh);
    }

    ~FuncionarioHorista(){
        cout << "Objeto da classe Funcionario Horista destruido" << endl;
    }

    float GetHoras(){
        return horas;
    }

    void SetHoras(float h) {
        horas = horas;
    }

    float GetValorHoras(){
        return valorHoras;
    }

    void SetValorHoras(float vh) {
        valorHoras = vh;
    }

    void print(){
        Funcionario::print();
        cout << endl << "Horas e valor horas: " << GetHoras()<< " - " << GetValorHoras() << endl;
    }
    float calculoRendimento(){
        if(GetHoras() <= 40){
            return GetHoras() * GetValorHoras();

        }else{
            return (40*GetValorHoras()) + (GetHoras() - 40) * (GetValorHoras() *1.5);
        }
    }



};


#endif