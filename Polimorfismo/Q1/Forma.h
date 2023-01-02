#ifndef FORMA_H
#define FORMA_H
#include <iostream>


class Forma{
    private:
    int sides;

    public:
    ~Forma(){
        std::cout << "Forma destruida" << std::endl;
    }

    Forma(int s){
        sides = s;
    }

    int getsides(){
        return sides;
    }
};

#endif