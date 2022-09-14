#include <iostream>
#include <string>
#include "Restaurante.h"

using namespace std;


//Construtor;
Restaurante::Restaurante(string nome, string endereco, string cidade, string estado, string cep, string telefone, string precoMedio, string tipoComida):Empresa(nome,endereco,cidade,estado,cep,telefone){

    this->precoMedio = precoMedio;
    this->tipoComida = tipoComida;

}

//GETS;
string Restaurante::GetPrecoMedio(){
    return precoMedio;
}
string Restaurante::GetTipoComida(){
    return tipoComida;
}

//SETS;
void Restaurante::SetPrecoMedio(string precoMedio) {
    precoMedio = precoMedio;
}
void Restaurante::SetTipoComida(string tipoComida) {
    tipoComida = tipoComida;
}


//Print
void Restaurante::printRestaurante(){
    printEmpresa();
    cout << "O preco medio dos pratos no seu restaurante: " << GetPrecoMedio() << endl;
    cout << "O tipo de comida mais servido no seu restaurante: " << GetTipoComida() << endl;
    cout << "==================================================" << endl;
}
