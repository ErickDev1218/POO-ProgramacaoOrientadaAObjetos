#include <iostream>
#include <string>
using namespace std;

#include "Estudante.h"

Estudante::Estudante(){

}

void Estudante::setNomeE(string nomeE){
    this->nomeE = nomeE;
}
void Estudante::setMatricula(string matricula){
    this->matricula = matricula;
}
void Estudante::setCurso(string curso){
    this->curso = curso;
}

string Estudante::getNomeE(){
    return nomeE;
}
string Estudante::getMatricula(){
    return matricula;
}
string Estudante::getCurso(){
    return curso;
}