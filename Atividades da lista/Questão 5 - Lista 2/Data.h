#ifndef DATA-H
#define DATA-H
#include <iostream>
#include <string>
using namespace std;

class Data{
    public:
        //Construtor;
        Data(int dia, int mes, int ano);
        Data(int dia, string mes, int ano);
        

        //Gets;
        int getmes();
        int getdia();
        int getano();

        //Sets;
        void setdia(int d);
        void setmes(int m);
        void setano(int a);

        //Prints;
        void print();

        //Calcular quantidade de dias do ano até aquele mês;
        int Calc(int dia, int mes);
        int Calc(int dia, string mes);

    private:
        int mes;
        int dia;
        int ano;
};
 
#endif