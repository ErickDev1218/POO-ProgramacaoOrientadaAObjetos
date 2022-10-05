#include <iostream>
#include "retangulo.h"
using namespace std;

retangulo::retangulo(float x, float y){
    setbase(x);
    setheight(y);
}

//sets;

void retangulo::setbase(float b){
    base = b;
}

void retangulo::setheight(float h){
    height = h;
}

//gets;

float retangulo::getbase(){
    return base;
}

float retangulo::getheight(){
    return height;
}

float retangulo::calculaArea(float x, float y){
    return x*y;
}

float retangulo::calculaPerim(float x, float y){
    return (x*2) + (y*2);
}

void retangulo::print(){
    cout << fixed << "Base do retangulo: " << getbase() << endl;
    cout << fixed << "Altura do retangulo: " << getheight() << endl;
}