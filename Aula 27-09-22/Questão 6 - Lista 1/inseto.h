#ifndef INSETO_H
#define INSETO_H
#include <iostream>
using namespace std;

class inseto{
    public:
        inseto() = default;
        inseto(string ni, bool v, bool a, bool f);

        string getnomeins();
        bool getvenenoso();
        bool getalado();
        bool getferrao();

        void setnomeins(string ni);
        void setvenenoso(bool v);
        void setalado(bool a);
        void setferrao(bool f);

        void print();


    private:
        string nomeins;
        bool venenoso;
        bool alado;
        bool ferrao;
};



#endif