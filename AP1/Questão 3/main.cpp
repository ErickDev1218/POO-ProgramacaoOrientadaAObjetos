#include "veiculoUtilitario.h"
#include <iostream>
using namespace std;

int main(){
    veiculoUtilitario a("Toyota Corolla",300,130,0,3);
    a.print();

    veiculoUtilitario b("Pick-upA",400,180,400,400);
    b.print();
}