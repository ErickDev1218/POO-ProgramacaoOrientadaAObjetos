#include <iostream>
#include <string>
#include "Empresa.h"

using namespace std;

//Construtor;
Empresa::Empresa(){

}

Empresa::Empresa(string nome, string endereco, string cidade, string estado, string cep, string telefone){
    this->nome = nome;
    this->endereco = endereco;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
    this->telefone = telefone;
}

//GETS;

string Empresa::GetNome(){
    return nome;
}

string Empresa::GetEndereco(){
    return endereco;
}

string Empresa::GetCidade(){
    return cidade;
}
string Empresa::GetEstado(){
    return estado;
}    
string Empresa::GetCep(){
    return cep;
}
string Empresa::GetTelefone(){
    return telefone;
}

//SETS;

void Empresa::SetNome(string nome) {
    this->nome = nome;
}
void Empresa::SetEndereco(string endereco) {
    this->endereco = endereco;
}
void Empresa::SetCidade(string cidade) {
    this->cidade = cidade;
}
void Empresa::SetEstado(string estado) {
    this->estado = estado;
}
void Empresa::SetCep(string cep) {
    this->cep = cep;
}
void Empresa::SetTelefone(string telefone) {
    this->telefone = telefone;
}

//Print

void Empresa::printEmpresa(){
    cout << "O nome do seu restaurante: " << GetNome() << endl;
    cout << "O endereco do seu restaurante: " << GetEndereco() << endl;
    cout << "A cidade do seu restaurante: " << GetCidade() << endl;
    cout << "O estado do seu restaurante: " << GetEstado() << endl;
    cout << "O CEP do seu restaurante: " << GetCep() << endl;
    cout << "O telefone do seu restaurante: " << GetTelefone() << endl;
}