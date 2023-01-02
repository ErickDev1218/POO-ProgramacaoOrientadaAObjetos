#ifndef FAC_H
#define FAC_H
#include <iostream>
#include "FuncionarioComissionado.h"
using namespace std;

class FuncionarioAssalariadoComissionado:public FuncionarioComissionado{
    private:
    float salario;

    public:
    FuncionarioAssalariadoComissionado(string n, string sn, string d, float v,float c, float s):FuncionarioComissionado(n,sn,d,v,c){
        SetSalario(s);
    }

    ~FuncionarioAssalariadoComissionado(){
        cout << "Objeto da classe Funcionario Assalariado Comissionado destruido" << endl;
    }

    float GetSalario(){
        return salario;
    }

    void SetSalario(float s){
        salario = s;
    }

    void print(){
        FuncionarioComissionado::print();
        cout << endl << "Salario " << GetSalario() << endl;
    }

    float calculoRendimento(){
        return FuncionarioComissionado::calculoRendimento()+GetSalario();
    }



};


#endif