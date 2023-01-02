#include "PacoteDoisDias.h"
#include "PacoteOverNight.h"
#include <iostream>
using namespace std;

int main(){
    Pacote test("","","","","","","","","","",10,10);
    cout << test.calculaCusto(10,10) << endl;

    PacoteOverNight test1("","","","","","","","","","",10,10,15);
    cout << test1.calculaNovoCusto(10,10,15) << endl;

    PacoteDoisDias test2("","","","","","","","","","",15,7,800);
    cout << test2.calculaNovoCusto(15,10,800) << endl;
}