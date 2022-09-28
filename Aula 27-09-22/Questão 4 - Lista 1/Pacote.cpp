#include "Pacote.h"
#include <iostream>
using namespace std;

Pacote::Pacote(string nd,string ed,string cd,string esd,string cepd,string nr,string er,string cr,string esr,string cepr,float p, float pk){
    if(p <= 0 || pk <= 0){
        cout << "ERROR! Valor de peso ou preco por KG invalidos!" << endl;
    }else{
        setnomeDes(nd);
        setendeDes(ed);
        setcidaDes(cd);
        setestaDes(esd);
        setcepDes(cepd);

        setnomeRem(nr);
        setendeRem(er);
        setcidaRem(cr);
        setestaRem(esr);
        setcepRem(cepr);

        setpeso(p);
        setprecoKg(pk);
    }
}

void Pacote::setnomeDes(string nd){nomeDes = nd;}
void Pacote::setendeDes(string ed){endeDes = ed;}
void Pacote::setcidaDes(string cd){cidaDes = cd;}
void Pacote::setestaDes(string esd){estaDes = esd;}
void Pacote::setcepDes(string cepd){cepDes = cepd;}

void Pacote::setnomeRem(string nr){nomeRem = nr;}
void Pacote::setendeRem(string er){endeRem = er;}
void Pacote::setcidaRem(string cr){cidaRem = cr;}
void Pacote::setestaRem(string esr){estaRem = esr;}
void Pacote::setcepRem(string cepr){cepRem = cepr;}

void Pacote::setpeso(float p){peso = p;}
void Pacote::setprecoKg(float pk){precoKg = pk;}

float Pacote::calculaCusto(float peso,float precoKg){return peso*precoKg;}

