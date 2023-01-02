#ifndef LAURASIATHERIA_H
#define LAURASIATHERIA_H
#include <iostream>

class Laurasiatheria{ 
    public:
        virtual void som(){
            std::cout << "Sou um animal" << std::endl;
        }
        virtual void test() = 0; //Metodo virtual puro.
};



#endif