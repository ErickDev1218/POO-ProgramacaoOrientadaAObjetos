#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
using namespace std;

class Funcionario{
    private:
    string nome;
    string sobrenome;
    string documento;

    public:

    Funcionario(string n, string sn, string d){
        SetNome(n);
        SetSobrenome(sn);
        SetDocumento(d);
    }

    virtual ~Funcionario(){
        cout << "Objeto da classe Funcionario destruido" << endl;
    }

    string GetNome(){
        return nome;
    }

    void SetNome(string nome) {
        nome = nome;
    }

    string GetSobrenome(){
        return sobrenome;
    }

    void SetSobrenome(string sobrenome) {
        sobrenome = sobrenome;
    }

    string GetDocumento(){
        return documento;
    }

    void SetDocumento(string documento) {
        documento = documento;
    }

    virtual float calculoRendimento() = 0; //É virtual puro!
    
    virtual void print(){
        cout << "Nome: " << GetNome() << " Sobrenome: " << GetSobrenome() << " Documento: " <<GetDocumento() << endl; 
    }

};





#endif