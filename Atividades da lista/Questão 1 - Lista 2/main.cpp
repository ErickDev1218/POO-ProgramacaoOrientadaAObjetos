#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

int main(){
    GradeBook *novo = new GradeBook("POO", "Thiago");

    novo->displayMessage();

    GradeBook *novo2 = new GradeBook("ED", "Atilio");

    novo2->displayMessage();
}
