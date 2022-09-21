#include <iostream>
#include <string>
using namespace std;

#include "Monitor.h"

Monitor::Monitor(){
    setNome("Matheus");
    setMatricula("854932");
    setCurso("CC");
    setDisciplina("FUP");
    setCargaHoraria(6);
    setSalario(500);
    setTurno("manha");
}

void Monitor::setDisciplina(string disciplina){
    this->disciplina = disciplina;
}
void Monitor::setCargaHoraria(int cargaHoraria){
    this->cargaHoraria = cargaHoraria;
}

string Monitor::getDisciplina(){
    return disciplina;
}
int Monitor::getCargaHoraria(){
    return cargaHoraria;
}

void Monitor::printMonitor(){
    cout << "Nome: " << getNome() << endl;
    cout << "Matricula: " << getMatricula() << endl;
    cout << "Curso: " << getCurso() << endl;
    cout << "Disciplina da monitoria: " << getDisciplina() << endl;
    cout << "Carga Horaria: " << getCargaHoraria() << endl;
    cout << "Salario: " << getSalario() << endl;
    cout << "Turno: " << getTurno() << endl;
}
