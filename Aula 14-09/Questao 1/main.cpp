#include <iostream>
#include <string>
#include "Restaurante.h"

using namespace std;

int main(){
    string nome, endereco, cidade, estado, cep, telefone, precoMedio, tipoComida;
    cout << "Ola, bem vindo ao cadastro de restaurantes!" << endl;
    cout << "Antes de comecar, quero pedir para que voce nao digite nada separado por espacos, ok?!" << endl;

    cout << "Digite o nome do seu restaurante: " << endl;
    cin >> nome;
    cout << endl;

    cout << "Digite o endereco do seu restaurante: " << endl;
    cin >> endereco;
    cout << endl;

    cout << "Digite a cidade do seu restaurante: " << endl;
    cin >> cidade;
    cout << endl;

    cout << "Digite o estado do seu restaurante: " << endl;
    cin >> estado;
    cout << endl;

    cout << "Digite o CEP do seu restaurante: " << endl;
    cin >> cep;
    cout << endl;

    cout << "Digite o telefone do seu restaurante: " << endl;
    cin >> telefone;
    cout << endl;

    cout << "Digite o preco medio de cada prato no seu restaurante: " << endl;
    cin >> precoMedio;
    cout << endl;

    cout << "Digite o tipo de comida mais servida no seu restaurante: " << endl;
    cin >> tipoComida;
    cout << endl;

    Restaurante *novo = new Restaurante(nome,endereco,cidade,estado,cep,telefone,precoMedio,tipoComida);

    novo->printRestaurante();
}