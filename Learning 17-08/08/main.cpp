#include <bits/stdc++.h>
#include "classes.h"
using namespace std;

int main(){
    //CLASSE OBJETO new CONSTRUTOR;

    Caneta *bic = new Caneta(1000);
    string cor;
    string tamanho;
    int valor;
    string qualidade;

    cout << "Digite qual a cor, o tamanho, o valor e qualidade da sua caneta!" << endl;
    cin >> cor >> tamanho >> valor >> qualidade;

    //OBJETO->METODOS
    bic->setcor(cor);
    bic->settamanho(tamanho);
    bic->setvalor(valor);
    bic->setqualidade(qualidade);

    cout << "A sua caneta bic tem as seguintes caracteristicas"<< endl;
    cout << "A cor da caneta eh " << bic->getcor() << endl;
    cout << "A sua caneta eh " << bic->gettamanho() << endl;
    cout << "Sua caneta custou " << bic->getvalor() << " reais" << endl;
    cout << "A sua caneta eh " << bic->getqualidade() << endl << endl;

    //Passando parametro para o construtor;
    Caneta *compact = new Caneta(0);
    cout << "Sua caneta compact tem as seguintes caracteristicas" << endl;
    cout << "A cor da caneta eh " << compact->getcor() << endl;
    cout << "A sua caneta eh " << compact->gettamanho() << endl;
    cout << "Sua caneta custou " << compact->getvalor() << " reais" << endl;
    cout << "A sua caneta eh " << compact->getqualidade() << endl;   
}