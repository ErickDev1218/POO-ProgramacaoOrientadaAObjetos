#ifndef RETANGULO_H
#define RETANGULO_H
#include <iostream>
using namespace std;

class retangulo{
    public:
        retangulo(float x, float y);

        //sets;
        void setbase(float b);
        void setheight(float h);

        //gets;
        float getbase();
        float getheight();

        float calculaArea(float x, float y);
        float calculaPerim(float x, float y);

        void print();

    private:
        float base;
        float height;
};




#endif