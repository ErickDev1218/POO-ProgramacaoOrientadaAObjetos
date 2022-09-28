#ifndef HUMANO_H
#define HUMANO_H
#include <iostream>
using namespace std;

class humano{
    public:
        humano() = default;
        humano(string n, string s, string l, string e, int i);

        string getnome();
        string getsexo();
        string getlingua();
        string getetnia();
        int getidade();

        void setnome(string n);
        void setsexo(string s);
        void setlingua(string l);
        void setetnia(string e);
        void setidade(int i);

        void print();

    private:
        string nome;
        string sexo;
        int idade;
        string lingua;
        string etnia;
};



#endif