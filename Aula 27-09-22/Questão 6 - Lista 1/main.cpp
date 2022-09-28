#include "superheroi.h"
#include <iostream>
using namespace std;

int main(){
    superheroi *batman = new superheroi("Bruce","masculino","ingles","branco",28,"Morcego",0,1,0,"Batman",1,0);

    batman->print();
}