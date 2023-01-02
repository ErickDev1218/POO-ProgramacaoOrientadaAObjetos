#ifndef SUPERHEROI_H
#define SUPERHEROI_H
#include "humano.h"
#include "inseto.h"
#include <iostream>
using namespace std;

class superheroi: public humano, public inseto{
    private:
        string codinome;
        bool trauma;
        bool poderes;
    public:
        superheroi() = default;
        superheroi(string n, string s, string l, string e, int i, string ni, bool v, bool a, bool f, string codinome,bool trauma, bool poderes);

        string getcodinome();
        bool gettrauma();
        bool getpoderes();

        void setcodinome(string cn);
        void settrauma(bool t);
        void setpoderes(bool p);

        void print();
};



#endif