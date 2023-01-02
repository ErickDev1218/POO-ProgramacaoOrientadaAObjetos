#ifndef CAO_HPP
#define CAO_HPP
#include "Animal.hpp"
#include <iostream>

class Cao: public Animal{
    public:
    void som(){
        std::cout << "Som cachorro!" << std::endl;
    }
};






#endif