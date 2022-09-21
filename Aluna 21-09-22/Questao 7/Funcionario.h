#include <iostream>
#include <string>
using namespace std;

class Funcionario{
public:
    Funcionario();
    
    void setNome(string nome);
    void setSalario(float salario);
    void setTurno(string turno);

    string getNome();
    float getSalario();
    string getTurno();


private:
    string nome;
    float salario;
    string turno;
    string RG;
};