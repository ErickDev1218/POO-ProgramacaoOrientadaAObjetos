#include <iostream>
#include <string>

using namespace std;

class Empresa{
    public:
    //Construtor;
    Empresa();
    Empresa(string, string, string, string, string, string);

    //GETS;
    string GetNome();
    string GetEndereco();
    string GetCidade();
    string GetEstado();
    string GetCep();
    string GetTelefone();

    //SETS;
    void SetNome(string nome);
    void SetEndereco(string endereco);
    void SetCidade(string cidade);
    void SetEstado(string estado);
    void SetCep(string cep);
    void SetTelefone(string telefone);

    //Print
    void printEmpresa();


    private:
    string nome;
    string endereco;
    string cidade;
    string estado; 
    string cep;
    string telefone;
};