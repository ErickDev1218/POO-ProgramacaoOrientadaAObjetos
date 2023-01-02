#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal{
    public:
    virtual void som(){
        std::cout << "Som animal" << std::endl;
    }
};




#endif