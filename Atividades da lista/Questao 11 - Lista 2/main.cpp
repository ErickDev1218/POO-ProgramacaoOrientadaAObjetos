#include "Complex.h"
#include <iostream>
using namespace std;

int main(){
    Complex test(3,5);
    Complex test1(5,9);
    Complex test2(test+test1);
    Complex test3(test-test1);
    Complex test4(test*test1);
    Complex test5(test/test1);

    test.print();
    cout << endl;
    test1.print();
    cout << endl;
    test2.print();
    cout << endl;
    test3.print();
    cout << endl;
    test4.print();
    cout << endl;
    test5.print();
    cout << endl;
}