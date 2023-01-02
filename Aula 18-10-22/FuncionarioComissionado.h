#ifndef FC_H
#define FC_H
#include <iostream>
#include "Funcionario.h"
using namespace std;

class FuncionarioComissionado: public Funcionario{
    private:
    float vendas;
    float comissao;

    public:
    FuncionarioComissionado(string n, string sn, string d, float v,float c):Funcionario(n,sn,d){
        SetVendas(v);
        SetComissao(c);
    }

    ~FuncionarioComissionado(){
        cout << "Objeto da classe Funcionario Comissionado destruido" << endl;
    }

    float GetVendas(){
        return vendas;
    }

    void SetVendas(float v) {
        vendas = v;
    }

    float GetComissao(){
        return comissao;
    }

    void SetComissao(float c) {
        comissao = c;
    }

    float calculoRendimento(){
        return GetVendas() * GetComissao();
    }
    void print(){
        Funcionario::print();
        cout << endl << "Comissao e vendas: " << GetComissao() << " - " << GetVendas() << endl;
    }


};



#endif