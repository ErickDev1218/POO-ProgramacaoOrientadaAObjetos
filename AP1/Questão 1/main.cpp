#include <iostream>
using namespace std;
#include "cilindro.h"

int main(){
    circulo x(5);

    retangulo y(4,8);

    x.printcirc();
    y.print();

    cilindro z(4,8,5);
    z.print();
}