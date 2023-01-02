#include "NumeroInteiro.h"
#include <iostream>
using namespace std;

int main(){
    NumeroInteiro test(1,0);

    NumeroInteiro test1(10,8);
    test1.print();

    NumeroInteiro test2(9,7);
    test2.print();

    NumeroInteiro test3(test1+test2);
    test3.print();

    NumeroInteiro test4(test1-test2);
    test4.print();

    NumeroInteiro test5(test1*test2);
    test5.print();

    NumeroInteiro test6(test1/test2);
    test6.print();
}