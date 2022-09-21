#include <iostream>
#include <string>
using namespace std;

class Estudante{
public:
    Estudante();

    void setNomeE(string nomeE);
    void setMatricula(string matricula);
    void setCurso(string curso);

    string getNomeE();
    string getMatricula();
    string getCurso();

private:
    string nomeE, matricula, curso;
};