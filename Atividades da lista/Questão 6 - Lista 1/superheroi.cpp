#include "superheroi.h"
#include <iostream>
using namespace std;

superheroi::superheroi(string n, string s, string l, string e, int i, string ni, bool v, bool a, bool f, string codinome,bool trauma, bool poderes):humano(n,s,l,e,i),inseto(ni,v,a,f){
    setcodinome(codinome);
    settrauma(trauma);
    setpoderes(poderes);
}

string superheroi::getcodinome(){return codinome;}
bool superheroi::gettrauma(){return trauma;}
bool superheroi::getpoderes(){return poderes;}

void superheroi::setcodinome(string cn){codinome = cn;}
void superheroi::settrauma(bool t){trauma = t;}
void superheroi::setpoderes(bool p){poderes = p;}

void superheroi::print(){
    humano::print();
    inseto::print();
    cout << "Codinome do heroi: " << getcodinome() << endl;
    cout << "Caso seja 1 = verdadeiro, caso seja 0 = falso" << endl;
    cout << "Tem traumas?  " << gettrauma() << endl;
    cout << "Tem superpoderes? "<< getpoderes() << endl;
}