#ifndef CAVALO_H
#define CAVALO_H
#include "Perissodactyla.h"
#include <iostream>
class Cavalo:public Perissodactyla{
    public:
        void som(){
            Perissodactyla::som();
            std::cout << "Sou um cavalo" << std::endl;
        }
};


#endif