#ifndef PROFDE_H
#define PROFDE_H
#include <iostream>
using namespace std;

class professor{
    public:
        professor(string n, string m, int i);

        //gets;
        string getnome();
        string getmatricula();
        int getidade();

        //sets;
        void setnome(string n);
        void setmatricula(string m);
        void setidade(int i);

    private:
        string nome;
        string matricula;
        int idade;
        
};

#endif;