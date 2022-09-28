#include "humano.h"
#include <iostream>
using namespace std;

humano::humano(string n, string s, string l, string e, int i){
    setnome(n);
    setsexo(s);
    setlingua(l);
    setetnia(e);
    setidade(i);
}

string humano::getnome(){return nome;}
string humano::getsexo(){return sexo;}
string humano::getlingua(){return lingua;}
string humano::getetnia(){return etnia;}
int humano::getidade(){return idade;}

void humano::setnome(string n){nome = n;}
void humano::setsexo(string s){sexo = s;}
void humano::setlingua(string l){lingua = l;}
void humano::setetnia(string e){etnia = e;}
void humano::setidade(int i){idade = i;}

void humano::print(){
    cout << "Nome humano: " << getnome() << endl;
    cout << "Sexo humano: " << getsexo() << endl;
    cout << "Lingua humano: " << getlingua() << endl;
    cout << "Etnia humano: " << getetnia() << endl;
    cout << "Idade humano: " << getidade() << endl;
}