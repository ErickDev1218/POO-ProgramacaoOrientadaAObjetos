#include <iostream>
#include <string>
using namespace std;
#include "Funcionario.h"

Funcionario::Funcionario(){

}
void Funcionario::setNome(string nome){
    this->nome = nome;
}
void Funcionario::setSalario(float salario){
    this->salario = salario;
}
void Funcionario::setTurno(string turno){
    this->turno = turno;
}

string Funcionario::getNome(){
    return nome;
}
float Funcionario::getSalario(){
    return salario;
}
string Funcionario::getTurno(){
    return turno;
}