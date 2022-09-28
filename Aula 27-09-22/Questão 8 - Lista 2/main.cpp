#include <iostream>
#include "Estacionamento.h"
using namespace std;
float Calc(int x){
    return x*1.50;
}


int main(){
    for(int i = 0; i < 5;i++){
        Estacionamento test("HW0-0H14","Palio",12,30,22);
        Tempo horasaida(15,44,30);

        int x = horasaida.gethora() - test.gethora();
        
        
        test.print();
        cout << "Hora de saida: ";
        horasaida.print();
        cout << endl << "Total a pagar: " << Calc(x) << endl;
        
    }
}