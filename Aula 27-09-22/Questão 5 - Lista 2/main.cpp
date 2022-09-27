#include "Data.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    int dia = 0, mes = 0, ano = 0;
    cout << "Digite o dia, a data e o ano atual: ";
    cin >> dia >> mes >> ano;

    Data *test = new Data(dia,mes,ano);

    test->print();
    test->Calc(dia,mes);

    system("pause");
}