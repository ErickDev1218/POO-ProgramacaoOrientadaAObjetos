#ifndef CAO_H
#define CAO_H
#include "Carnivora.h"
#include <iostream>

class Cao:public Carnivora{
    public:
        void som(){
            Carnivora::som();
            std::cout << "Sou um cao" << std::endl;
        }
};


#endif