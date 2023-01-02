#ifndef GATO_H
#define GATO_H
#include "Carnivora.h"
#include <iostream>

class Gato: public Carnivora{
    public:
        void som(){
            Carnivora::som();
            std::cout << "Sou um gato" << std::endl;
        }
};





#endif