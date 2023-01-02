#include <iostream>
#include "Funcionario.h"
#include "FuncionarioAssalariado.h"
#include "FuncionarioAssalariadoComissionado.h"
#include "FuncionarioComissionado.h"
#include "FuncionarioHorista.h"

using namespace std;

int main(){
    Funcionario *vetor[] = {
        new FuncionarioAssalariado("Cristovão","Colombo","222.222.222-22", 6000.00),
        new FuncionarioComissionado("Ciro","Gomes","333.333.333-33",0.20,3300.00),
        new FuncionarioAssalariadoComissionado("Joaquin","Xavier","000.000.000-00", 0.10,27000.00, 4000.0),
        new FuncionarioHorista("Pedro","Cabral","111.111.111-11",65,40.0)};

        for(int i = 0; i < 4; i++){
            cout << vetor[i]->calculoRendimento() << endl;
            vetor[i]->print();
        }
        for(int i = 0; i < 4; i++){
            delete vetor[i];
        }
    }
