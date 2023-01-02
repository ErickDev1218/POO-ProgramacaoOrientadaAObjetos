#include "Data.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    int identificador = 0;
    cout << "Como voce gostaria de passar o mes atual?" << endl 
    << "Digite 1 para forma numerica (Ex: 09) ou digite 2 para forma escritas (Ex: setembro)" << endl;
    cin >> identificador;

    if(identificador == 1){
        int dia = 0, mes = 0, ano = 0;
        cout << "Digite o dia, a data e o ano atual: ";
        cin >> dia >> mes >> ano;

        Data *test = new Data(dia,mes,ano);

        test->print();
        test->Calc(dia,mes);
    }else if(identificador == 2){
        int dia = 0, ano = 0;
        string m;
        cout << "Digite o dia, a data e o ano atual: ";
        cin >> dia;
        cin.ignore();
        cin >> m;
        cin.ignore();
        cin >> ano;

        Data *test2 = new Data(dia,m,ano);
        test2->print();
        test2->Calc(dia,m);
    }
    system("pause");
}