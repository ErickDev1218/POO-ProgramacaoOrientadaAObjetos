#include <iostream>
#include "empregado.h"
#include "empregadoAssalariado.h"
#include "empregadoHorista.h"
using namespace std;

int main(){
    cout << "Empregado: " << endl;
    empregado *novoemp = new empregadoAssalariado("joao",0);
    novoemp->print();
    cout << endl;
    empregado *novoempAs = new empregadoAssalariado("Pedro",20.500);
    cout << "Empregado Assalariado: " << endl;
    novoempAs->print();
    cout << endl;
    empregado *novoempHr = new empregadoHorista("Thiago",44,70);
    cout << "Empregado horista: " << endl;
    novoempHr->print();



}