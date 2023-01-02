#ifndef FORMABI_H
#define FORMABI_H
#include "Forma.h"
#include <iostream>

class FormaBi:public Forma{
    private:
        bool Bid;
    public:
        ~FormaBi(){
            std::cout << "Forma Bidimensional destruida" << std::endl;
        }
        
};

#endif