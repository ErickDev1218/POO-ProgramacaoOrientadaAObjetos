#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
using namespace std;

class circulo{
    public:
        circulo(float r);

        //gets;
        float getraio();

        //sets;
        float setraio(float r);


        float calculaAreaCirc();
        float calculaPerimCirc();
        void printcirc();


    private:
        float raio;


};


#endif