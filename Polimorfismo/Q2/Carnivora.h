#ifndef CARNIVORA_H
#define CARNIVORA_H
#include "Laurasiatheria.h"
#include <iostream>

class Carnivora: public Laurasiatheria{
    public:
        void som(){
            Laurasiatheria::som();
            std::cout << "Sou carnivoro" << std::endl;
        }
        void Carnivora::test(){
            cout << "Implementei" << endl;
        }
};




#endif