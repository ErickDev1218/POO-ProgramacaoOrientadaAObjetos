#include <bits/stdc++.h> //bibliotece
#include "classes.h"
using namespace std;

//Main
int main(){

    Membro *professor = new Membro("Thiago","professor","thiago@gmail.com","POO",28,'M');

    cout << professor->getnome() << " " << professor->getocupacao() << " " << professor->getemail() << " " << professor->getpalavraChave() << " " << professor->getidade() << " " << professor->getsexo();

    cout << endl << endl;

    Membro *tecnico = new Membro("Erick","tecnico","erick@gmail.com","TI",23,'M');

    cout << tecnico->getnome() << " " << tecnico->getocupacao() << " " << tecnico->getemail() << " " << tecnico->getpalavraChave() << " " << tecnico->getidade() << " " << tecnico->getsexo();

    cout << endl << endl;

    Membro *aluno = new Membro("Novata","estudante","novata@gmail.com","CC",17,'F');
    
    cout << aluno->getnome() << " " << aluno->getocupacao() << " " << aluno->getemail() << " " << aluno->getpalavraChave() << " " << aluno->getidade() << " " << aluno->getsexo();

    cout << endl << endl;
    //Usando a função imprimir;
    professor->imprimir();
    cout << endl;
    tecnico->imprimir();
    cout << endl;
    aluno->imprimir();


}
