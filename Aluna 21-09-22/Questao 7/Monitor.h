#include <iostream>
#include <string>
using namespace std;

#include "Estudante.h"
#include "Funcionario.h"

class Monitor: public Estudante, Funcionario{
public:
Monitor();

void setDisciplina(string disciplina);
void setCargaHoraria(int cargaHoraria);

string getDisciplina();
int getCargaHoraria();

void printMonitor();

private:
    string disciplina;
    int cargaHoraria;
};