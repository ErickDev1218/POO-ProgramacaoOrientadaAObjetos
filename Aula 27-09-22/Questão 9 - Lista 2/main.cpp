#include "NumeroRacional.h"
#include <iostream>
using namespace std;

int main(){
    NumeroRacional test(1,0);

    NumeroRacional test1(10,8);
    test1.print();

    NumeroRacional test2(9,7);
    test2.print();

    NumeroRacional test3(test1+test2);
    test3.print();

    NumeroRacional test4(test1-test2);
    test4.print();

    NumeroRacional test5(test1*test2);
    test5.print();

    NumeroRacional test6(test1/test2);
    test6.print();
}