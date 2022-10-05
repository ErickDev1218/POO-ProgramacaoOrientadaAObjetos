#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
using namespace std;

class veiculo{
    public:
        veiculo(string n, int pe, int po);

        string getnome();
        int getpeso();
        int getpotencia();

        void setnome(string n);
        void setpeso(int pe);
        void setpotencia(int po);

        void print();

    private:
    string nome;
    int peso;
    int potencia;
};




#endif