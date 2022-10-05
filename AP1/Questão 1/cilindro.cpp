#include "cilindro.h"
#include "circulo.h"
#include "retangulo.h"
#include <iostream>
using namespace std;
cilindro::cilindro(float x, float y, float r):retangulo(x,y),circulo(r){

}

float cilindro::calculaAreaCil(){
    return 3.14 * (circulo::getraio() * circulo::getraio());
    
}

float cilindro::calculaVolumeCil(){
    return retangulo::getheight()*circulo::calculaAreaCirc();
}

void cilindro::print(){
    cout << fixed <<"Area do cilindro: " << calculaAreaCil() << endl;
    cout << fixed << "Volume do cilindro: " << calculaVolumeCil() << endl;
}