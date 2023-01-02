#include "Aluno.h"
#include <iostream>
#include <string>
using namespace std;

int gerarID(){
    static int cont = 1;
    return cont++;
}


int main(){
     
    for(int i = 0; i < 15; i++){
        cout << "Digite seu nome: ";
        string nome = " ";
        cin >> nome;
        cout << "Digite seu semestre: ";
        string semestre = " ";
        cin >> semestre;
        cout << "Digite seu grau: ";
        string grau = " ";
        cin >> grau;


        Aluno novo(nome,semestre,grau);
        if(i+1 < 15){
            cout << "Ola, " << novo.getnome() << " do " << novo.getsemestre() << " semestre e do " << novo.getgrau() << " grau. Seu ID eh: " << gerarID() << endl;

            cout << "Vamos ao proximo aluno!" << endl << "========================" << endl; 
        }else{
            cout << "Ola, " << novo.getnome() << "do " << novo.getsemestre() << " semestre e do " << novo.getgrau() << " grau. Seu ID eh: " << gerarID() << endl;

            cout << "========================";
        }

    }
}