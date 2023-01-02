#ifndef FA_H
#define FA_H
#include <iostream>
#include "Funcionario.h"
using namespace std;

class FuncionarioAssalariado: public Funcionario{
    private:
    float salarioSemanal;



    public:
    FuncionarioAssalariado(string n, string sn, string d, float ss): Funcionario(n,sn,d){
        SetSalarioSemanal(ss);
    }
    ~FuncionarioAssalariado(){
        cout << "Objeto da classe Funcionario Assalariado destruido" << endl;
    }
    
    float GetSalarioSemanal(){
        return salarioSemanal;
    }

    void SetSalarioSemanal(float ss) {
        salarioSemanal = ss;
    }

    float calculoRendimento(){
        return GetSalarioSemanal();
    }
    
    void print(){
        Funcionario::print();
        cout << endl << "Salario semanal: " << GetSalarioSemanal() << endl;
    }
};





#endif