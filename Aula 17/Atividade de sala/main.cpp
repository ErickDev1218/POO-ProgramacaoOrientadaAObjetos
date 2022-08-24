#include <bits/stdc++.h>
#include "classes.h"
using namespace std;

int main(){
    string nome,modalidade,ocupacao,email;
    int idade;
    char sexo;

    cout << "Digite seu nome, modalidade, ocupacao, email, idade e sexo!" << endl;
    cin >> nome >> modalidade >> ocupacao >> email >> idade >> sexo;

    Usuario *user = new Usuario;

    user->setnome(nome);
    user->setmodalidade(modalidade);
    user->setocupacao(ocupacao);
    user->setemail(email);
    user->setidade(idade);
    user->setsexo(sexo);

    cout << user->getnome()<< endl << user->getmodalidade() << endl << user->getocupacao() << endl << user->getemail() << endl << user->getidade() << endl << user->getsexo() << endl;
}