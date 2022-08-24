#include <bits/stdc++.h>
#include "classes.h"
using namespace std;

int main(){
    cout << "Ola, seja bem-vindo ao nosso sistema de cadastro!" << endl << "Por favor, digite seu nome, o seu genero, seu trabalho atual, sua idade, e seu salario desejado (em reais)." << endl;

    string nome, genero,job;
    int idade;
    float salario;

    cin >> nome >> genero >> job >> idade >> salario;

    Person *userone = new Person;
    userone->setname(nome);
    userone->setgenero(genero);
    userone->setjob(job);
    userone->setage(idade);
    userone->setsalario(salario);

    cout << "Ola " << userone->getname() << "!" << endl << "Vi aqui no meu sistema que voce tem " << userone->getage() << " anos." << endl << "Vi que voce eh do sexo " << userone->getgenero() << "!" << endl << "Gostei da sua profissao, " << userone->getjob() << " sao muito importantes" << endl << "Seu salario desejado eh de " << userone->getsalario() << " reais" << endl;

}

