#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string>
using namespace std;

class Aluno{
    public:
    Aluno(string nome, string semestre, string grau);

    string getnome();
    string getsemestre();
    string getgrau();

    void setnome(string nome);
    void setsemestre(string semestre);
    void setgrau(string grau);

    private:
    string nome;
    string semestre;
    string grau;
};



#endif