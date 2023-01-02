#include "PacoteOverNight.h"
#include <iostream>
using namespace std;

PacoteOverNight::PacoteOverNight(string nd,string ed,string cd,string esd,string cepd,string nr,string er,string cr,string esr,string cepr,float p, float pk,float ta):Pacote( nd, ed, cd, esd, cepd, nr, er, cr, esr, cepr, p,  pk){
    settaxaAd(ta);
}

void PacoteOverNight::settaxaAd(float ta){
    taxaAd = ta;
}

float PacoteOverNight::gettaxaAD(){
    return taxaAd;
}

float PacoteOverNight::calculaNovoCusto(float peso, float precoKg, float taxaAd){
    float x = Pacote::calculaCusto(peso,precoKg);
    return x + taxaAd;
}