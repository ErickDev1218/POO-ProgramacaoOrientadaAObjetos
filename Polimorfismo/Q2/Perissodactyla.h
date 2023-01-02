#ifndef PERISSODACTYLA_H
#define PERISSODACTYLA_H
#include "Laurasiatheria.h"
#include <iostream>

class Perissodactyla:public Laurasiatheria{
    public:
        void som(){
            Laurasiatheria::som();
            std::cout << "Sou um perissodactyla" << std::endl;
        }
        void Perissodactyla::test(){
            cout << "Implementei pra cavalo" << endl;
        }
};


#endif