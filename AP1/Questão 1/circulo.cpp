#include "circulo.h"
#include <iostream>
using namespace std;


circulo::circulo(float r){
    setraio(r);
}

//gets;

float circulo::getraio(){
    return raio;
}

//sets;

float circulo::setraio(float r){
    raio = r;
}
float circulo::calculaAreaCirc(){
    return 3.14* (raio*raio);
}

float circulo::calculaPerimCirc(){
    return 2*3.14 * (raio*raio);
}

void circulo::printcirc(){
    cout << fixed << "Esse eh o raio do circulo: " << getraio() << endl;
}