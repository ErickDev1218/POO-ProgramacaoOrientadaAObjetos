#include "Tempo.h"
#include <iostream>
using namespace std;

int main(){
    Tempo hora1(5,30,22);
    hora1.print();

    Tempo hora2(6,25,13);
    hora2.print();

    Tempo hora3(hora1+hora2);
    hora3.print();

    Tempo hora4(hora3-hora2);
    hora4.print();


}