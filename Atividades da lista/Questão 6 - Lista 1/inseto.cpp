#include "inseto.h"
#include <iostream>
using namespace std;

inseto::inseto(string ni, bool v, bool a, bool f){
    setnomeins(ni);
    setvenenoso(v);
    setalado(a);
    setferrao(f);
}

string inseto::getnomeins(){return nomeins;}
bool inseto::getvenenoso(){return venenoso;}
bool inseto::getalado(){return alado;}
bool inseto::getferrao(){return ferrao;}

void inseto::setnomeins(string ni){nomeins = ni;}
void inseto::setvenenoso(bool v){venenoso = v;}
void inseto::setalado(bool a){alado = a;}
void inseto::setferrao(bool f){ferrao = f;}


void inseto::print(){
    cout << "Nome inseto: " << getnomeins() << endl;
    cout << "Caso seja 1 = verdadeiro, caso seja 0 = falso" << endl;
    cout << "Venenoso? " << getvenenoso() << endl;
    cout << "Alado? " << getalado() << endl;
    cout << "Tem ferrao? " << getferrao() << endl;
}